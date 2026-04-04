// ============================================================
//  RadialSpawnerAuthoring.cs
//  Drop this MonoBehaviour onto a GameObject in a SubScene.
//  Assign your entity prefab, tweak counts/radius, then bake.
// ============================================================

using UnityEngine;
using Unity.Entities;


/// <summary>
/// Authoring component. Attach to a GameObject inside a SubScene.
/// The Baker converts it into ECS data at build / domain-reload time.
/// </summary>
public class RadialSpawnerAuthoring : MonoBehaviour
{
    [Header("Prefab")]
    [Tooltip("The GameObject prefab that has been set up for ECS baking.")]
    public GameObject EntityPrefab;
    public GameObject BarPrefab;


    [Header("Spawn Settings")]
    [Tooltip("Number of entities to place radially.")]
    public int EntityCount = 10_000;

    [Tooltip("Maximum distance from the world origin.")]
    public float Radius = 60f;

    [Tooltip("Peak height variation (±) along the spiral band.")]
    public float HeightVariance = 4f;

    [Tooltip("How many full 360° rings there are")]    
    public int RingIndex = 8;
    

    class Baker : Baker<RadialSpawnerAuthoring>
    {
        public override void Bake(RadialSpawnerAuthoring authoring)
        {
            // Create a non-rendered entity to hold our config singleton.
            Entity configEntity = GetEntity(TransformUsageFlags.None);

            AddComponent(configEntity, new RadialSpawnerConfig
            {
                // GetEntity converts the prefab GameObject into its ECS
                // counterpart so it can be used as a template at runtime.
                Prefab        = GetEntity(authoring.EntityPrefab, TransformUsageFlags.Dynamic),
                BarPrefab  = GetEntity(authoring.BarPrefab, TransformUsageFlags.Dynamic),
                EntityCount   = authoring.EntityCount,
                Radius        = authoring.Radius,
                HeightVariance = authoring.HeightVariance,
                RingIndex   = authoring.RingIndex,
            });

        }
    }
}
/// <summary>
/// Configuration for the radial spawner, stored as a singleton entity.
/// </summary>
