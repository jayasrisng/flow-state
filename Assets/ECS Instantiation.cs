using UnityEngine;
using Unity.Entities;
using Unity.Jobs;
using Unity.Burst;
using Unity.Collections;
using Unity.Mathematics;
using Unity.Transforms;
using System;
using Unity.Rendering;



public struct RadialSpawnerConfig : IComponentData
{
    public Entity Prefab;
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
    public int   BandIndex;  
}

[InternalBufferCapacity(512)]
public struct AmplitudeSample : IBufferElementData
{
    public float Value;
}




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
        const float kRise  = 0.3f;   // fast attack  (higher = snappier)
        const float kFall  = 0.055f;  // slow release (lower  = smoother tail)
        for (int i = 0; i < size; i++)
        {
            float incoming = _managed[i];
            float prev     = buf[i].Value;
            float t        = incoming > prev ? kRise : kFall;   // asymmetric lerp
            buf[i] = new AmplitudeSample { Value = math.lerp(prev, incoming, t) };
    }          

        

        buf.ResizeUninitialized(size);

    }
    }




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
            new RotateJob
            {
                ElapsedTime     = (float)SystemAPI.Time.ElapsedTime,
                EntityCount     = cfg.EntityCount,
                SpiralTurns     = cfg.RingIndex,
                HeightVariance  = cfg.HeightVariance,
                AmplitudeLookup = SystemAPI.GetBufferLookup<AmplitudeSample>(true),
                AudioEntity     = configEntity,
                AmplitudeScale  =0.1f,
            }.ScheduleParallel();



            return;
        }

        var ecb = new EntityCommandBuffer(Allocator.TempJob);

        new RadialSpawnJob
        {
            ECB          = ecb.AsParallelWriter(),
            Prefab       = cfg.Prefab,
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


//  SPAWN JOB


[BurstCompile]
public struct RadialSpawnJob : IJobParallelFor
{
    [WriteOnly] public EntityCommandBuffer.ParallelWriter ECB;

    public Entity Prefab;
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

        // Map entity FFT band
        int bandIndex = (int)math.floor(frac * SpectrumSize);

        Entity dot = ECB.Instantiate(index, Prefab);
        ECB.SetComponent(index, dot,
            LocalTransform.FromPositionRotationScale(ringPos, quaternion.identity, 0.1f));
        ECB.AddComponent(index, dot, new URPMaterialPropertyBaseColor
{
    Value = new float4(0.1f, 0.1f, 0.1f, 1f)
});
        ECB.AddComponent(index, dot, new Rotator
        {
            Speed     = .5f,
            IndexNo   = index,
            BaseY     = 0f,
            BandIndex = bandIndex,  
        });


    }
}



[BurstCompile]
partial struct RotateJob : IJobEntity
{
    public float ElapsedTime;
    public int   EntityCount;
    public float SpiralTurns;
    public float HeightVariance;
    [ReadOnly] public BufferLookup<AmplitudeSample> AmplitudeLookup;
    public Entity AudioEntity;
    public float  AmplitudeScale;

void Execute(ref LocalTransform transform, ref URPMaterialPropertyBaseColor uRP,  in Rotator rotator)
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


    float waveHeight = HeightVariance * (audioValue+(audioValue<=0.09?0:1));

    float targetY = math.sin(ElapsedTime * rotator.Speed + phase) * waveHeight;
// Base color when silent
float4 baseColor  = new float4(0.75f, 0.75f, 0.75f, 1f);

float4 audioColor = new float4(
    math.abs(math.sin(ElapsedTime * 0.7f)),
    math.abs(math.cos(ElapsedTime * 1.3f)),
    math.abs(math.sin(ElapsedTime * 1.9f)),
    1f
);
    const float kSmooth = 0.15f;

const float kDeadZone = 0.1f;
uRP.Value = audioValue < kDeadZone
    ? math.lerp(audioColor, baseColor,kSmooth)
    : audioColor;

    transform.Position = new float3(
        transform.Position.x,
        math.lerp(transform.Position.y, targetY, kSmooth),
        transform.Position.z
    );
}
}