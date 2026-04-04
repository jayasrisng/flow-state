using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.Rendering;
public class ResolutionSetup : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        var urpAsset = GraphicsSettings.defaultRenderPipeline as UniversalRenderPipelineAsset;
        if (urpAsset != null)        
        {
            urpAsset.renderScale = 2f; // Adjust the render scale
            urpAsset.msaaSampleCount = 4; // Enable 4x MSAA
        }

}
}
