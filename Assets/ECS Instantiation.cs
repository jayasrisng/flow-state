using UnityEngine;
using Unity.Entities;
using Unity.Jobs;
using Unity.Burst;
using Unity.Collections;
using Unity.Mathematics;
using Unity.Transforms;

// ═══════════════════════════════════════════════════════════════════════
//  COMPONENTS
// ═══════════════════════════════════════════════════════════════════════

public struct RadialSpawnerConfig : IComponentData
{
    public Entity Prefab;
    public Entity BarPrefab;
    public int    EntityCount;
    public float  Radius;
    public float  HeightVariance;
    public float  RingIndex;
    public int    SpectrumSize;
    public float  AmplitudeScale;
}

public struct SpawnerInitialized : IComponentData { }

public struct Rotator : IComponentData
{
    public float Speed;
    public int   IndexNo;
    public float BaseY;
    public int   BandIndex;   // ← NEW: FFT band this dot listens to
}

[InternalBufferCapacity(512)]
public struct AmplitudeSample : IBufferElementData
{
    public float Value;
}

public struct AmplitudeBar : IComponentData
{
    public int    BandIndex;
    public float3 BasePosition;
}


// ═══════════════════════════════════════════════════════════════════════
//  AUDIO SAMPLER  (unchanged — main thread only)
// ═══════════════════════════════════════════════════════════════════════

[UpdateInGroup(typeof(SimulationSystemGroup))]
[UpdateBefore(typeof(ECSInstantiation))]
public partial class AudioSamplerSystem : SystemBase
{
    float[] _managed;

    protected override void OnCreate() => RequireForUpdate<RadialSpawnerConfig>();

    protected override void OnUpdate()
    {
        Entity cfgEntity = SystemAPI.GetSingletonEntity<RadialSpawnerConfig>();
        int    size      = math.max(64,
            SystemAPI.GetComponent<RadialSpawnerConfig>(cfgEntity).SpectrumSize);

        if (_managed == null || _managed.Length != size)
            _managed = new float[size];

        AudioListener.GetSpectrumData(_managed, 0, FFTWindow.BlackmanHarris);

        if (!EntityManager.HasBuffer<AmplitudeSample>(cfgEntity))
            EntityManager.AddBuffer<AmplitudeSample>(cfgEntity);

        DynamicBuffer<AmplitudeSample> buf =
            EntityManager.GetBuffer<AmplitudeSample>(cfgEntity);

        buf.ResizeUninitialized(size);
        for (int i = 0; i < size; i++){
            buf[i] = new AmplitudeSample { Value = _managed[i]};            
        if (i % 16 == 0)
            UnityEngine.Debug.Log(buf[i].Value);
    }
    }
}


// ═══════════════════════════════════════════════════════════════════════
//  MAIN ECS SYSTEM
// ═══════════════════════════════════════════════════════════════════════

[BurstCompile]
public partial struct ECSInstantiation : ISystem
{
    [BurstCompile]
    public void OnCreate(ref SystemState state) =>
        state.RequireForUpdate<RadialSpawnerConfig>();

    [BurstCompile]
    public void OnUpdate(ref SystemState state)
    {
        Entity              configEntity = SystemAPI.GetSingletonEntity<RadialSpawnerConfig>();
        RadialSpawnerConfig cfg          = SystemAPI.GetComponent<RadialSpawnerConfig>(configEntity);

        if (SystemAPI.HasComponent<SpawnerInitialized>(configEntity))
        {
            // ── Runtime: oscillate ring dots driven by audio ───────────────────
            new RotateJob
            {
                ElapsedTime     = (float)SystemAPI.Time.ElapsedTime,
                EntityCount     = cfg.EntityCount,
                SpiralTurns     = cfg.RingIndex,
                HeightVariance  = cfg.HeightVariance,
                // ↓ NEW: feed audio data into the wave job
                AmplitudeLookup = SystemAPI.GetBufferLookup<AmplitudeSample>(true),
                AudioEntity     = configEntity,
                AmplitudeScale  =0.1f,
            }.ScheduleParallel();

            new ScaleBarJob
            {
                AmplitudeLookup = SystemAPI.GetBufferLookup<AmplitudeSample>(true),
                AudioEntity     = configEntity,
                AmplitudeScale  = cfg.AmplitudeScale,
            }.ScheduleParallel();

            return;
        }

        // ── First frame: spawn ─────────────────────────────────────────────────
        var ecb = new EntityCommandBuffer(Allocator.TempJob);

        new RadialSpawnJob
        {
            ECB          = ecb.AsParallelWriter(),
            Prefab       = cfg.Prefab,
            BarPrefab    = cfg.BarPrefab,
            EntityCount  = cfg.EntityCount,
            Radius       = cfg.Radius,
            SpiralTurns  = cfg.RingIndex,
            SpectrumSize = cfg.SpectrumSize,
        }.Schedule(cfg.EntityCount, 128, state.Dependency).Complete();

        ecb.AddComponent<SpawnerInitialized>(configEntity);
        ecb.Playback(state.EntityManager);
        ecb.Dispose();
    }

    public void OnDestroy(ref SystemState state) { }
}


// ═══════════════════════════════════════════════════════════════════════
//  SPAWN JOB
// ═══════════════════════════════════════════════════════════════════════

[BurstCompile]
public struct RadialSpawnJob : IJobParallelFor
{
    [WriteOnly] public EntityCommandBuffer.ParallelWriter ECB;

    public Entity Prefab;
    public Entity BarPrefab;
    public int    EntityCount;
    public float  Radius;
    public float  SpiralTurns;
    public int    SpectrumSize;

    public void Execute(int index)
    {
        float frac  = (float)index / EntityCount;
        float t     = math.ceil(frac * SpiralTurns);
        float angle = frac * math.PI2 * SpiralTurns;

        const float innerFraction = 0.05f;
        float r      = math.lerp(Radius * innerFraction, math.floor(Radius), t);
        var   ringPos = new float3(math.cos(angle) * r, 0f, math.sin(angle) * r);

        // Map entity → FFT band (shared by both dot and bar)
        int bandIndex = (int)math.floor(frac * SpectrumSize);

        // ── Ring dot ──────────────────────────────────────────────────────────
        Entity dot = ECB.Instantiate(index, Prefab);
        ECB.SetComponent(index, dot,
            LocalTransform.FromPositionRotationScale(ringPos, quaternion.identity, 0.3f));
        ECB.AddComponent(index, dot, new Rotator
        {
            Speed     = 1.5f,
            IndexNo   = index,
            BaseY     = 0f,
            BandIndex = bandIndex,   // ← NEW
        });

        // ── Amplitude bar ─────────────────────────────────────────────────────
        Entity bar = ECB.Instantiate(index, BarPrefab);
        ECB.SetComponent(index, bar,
            LocalTransform.FromPositionRotationScale(
                ringPos + new float3(0f, 0.5f, 0f), quaternion.identity, 1f));
        ECB.AddComponent(index, bar,
            new PostTransformMatrix { Value = float4x4.Scale(0.05f, 1f, 0.05f) });
        ECB.AddComponent(index, bar,
            new AmplitudeBar { BandIndex = bandIndex, BasePosition = ringPos });
    }
}


// ═══════════════════════════════════════════════════════════════════════
//  ROTATE JOB  –  sine wave HEIGHT is now modulated by audio amplitude
//
//  Formula:
//    waveHeight = HeightVariance * (1 + audioValue * AmplitudeScale)
//
//  At silence the dots oscillate gently at HeightVariance as before.
//  As the band's amplitude rises, the wave swings dramatically higher.
// ═══════════════════════════════════════════════════════════════════════

[BurstCompile]
partial struct RotateJob : IJobEntity
{
    public float ElapsedTime;
    public int   EntityCount;
    public float SpiralTurns;
    public float HeightVariance;

    // ↓ NEW
    [ReadOnly] public BufferLookup<AmplitudeSample> AmplitudeLookup;
    public Entity AudioEntity;
    public float  AmplitudeScale;

    void Execute(ref LocalTransform transform, in Rotator rotator)
    {
        float phase = math.ceil(
            ((float)(EntityCount - rotator.IndexNo) / EntityCount) * SpiralTurns);

        float audioValue = 0f;

        if (AmplitudeLookup.HasBuffer(AudioEntity))
        {
            var buf = AmplitudeLookup[AudioEntity];
            int idx = math.clamp(rotator.BandIndex, 0, buf.Length - 1);

            audioValue = buf[idx].Value;
        }

        float waveHeight = HeightVariance * (1f + audioValue);

        float speed = rotator.Speed + (audioValue * AmplitudeScale);

        transform.Position = new float3(
            transform.Position.x,
            rotator.BaseY + math.sin((ElapsedTime * speed) + phase),
            transform.Position.z
        );
    }
}


// ═══════════════════════════════════════════════════════════════════════
//  SCALE BAR JOB  (unchanged)
// ═══════════════════════════════════════════════════════════════════════

[BurstCompile]
partial struct ScaleBarJob : IJobEntity
{
    [ReadOnly] public BufferLookup<AmplitudeSample> AmplitudeLookup;
    public Entity AudioEntity;
    public float  AmplitudeScale;

    void Execute(
        ref LocalTransform     transform,
        ref PostTransformMatrix ptm,
        in  AmplitudeBar        bar)
    {
        float height = 0.05f;

        if (AmplitudeLookup.HasBuffer(AudioEntity))
        {
            var buf = AmplitudeLookup[AudioEntity];
            int idx = math.clamp(bar.BandIndex, 0, buf.Length - 1);
            height  = math.max(0.05f, buf[idx].Value * AmplitudeScale);
        }

        transform.Position = bar.BasePosition + new float3(0f, height * 0.5f, 0f);
        ptm.Value = float4x4.Scale(0.05f, height, 0.05f);
    }
}

