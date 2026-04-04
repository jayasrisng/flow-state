using UnityEngine;
using UnityEngine.InputSystem;
public class TrackSwitch: MonoBehaviour
{
    public AudioSource source;
    public AudioClip track1;
    public AudioClip track2;
    public InputAction switchTrackAction;
    private void Awake()
    {
        switchTrackAction.Enable();

    }

    public void Update()
    {
        if (switchTrackAction.WasPressedThisFrame())
        {
            if (source.clip == track1)
            {
                source.Stop();
                source.clip = track2;
            }
            else
            {
                
                source.Stop();
                source.clip = track1;
            }
            source.Play();
        }
    }
}
