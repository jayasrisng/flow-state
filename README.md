# Flowstate VR

Flowstate VR is a Unity XR prototype focused on immersive rhythm/music interactions. The project currently includes a playable sample scene, track switching input, and ECS experimentation.

## Demo Video

- Local demo file in this repo: [`docs/demo/hog-hacks-vr-demo.mp4`](docs/demo/hog-hacks-vr-demo.mp4)

<video src="docs/demo/hog-hacks-vr-demo.mp4" controls width="900"></video>

## Tech Stack

- Unity `6000.4.1f1`
- XR Interaction Toolkit / XR Origin setup
- Unity Input System
- C# scripts (MonoBehaviour + ECS experiments)

## Project Structure

- `Assets/Scenes/SampleScene.unity`: Main scene
- `Assets/TrackSwitch.cs`: Input-driven music track toggle logic
- `Assets/Scripts/ECS/`: ECS component/experimentation scripts
- `Assets/XR/`: XR rig and XR-related assets
- `docs/demo/`: Demo media used in documentation

## Open and Run

1. Open Unity Hub.
2. Add this folder as a project.
3. Use Unity Editor version `6000.4.1f1`.
4. Open `Assets/Scenes/SampleScene.unity`.
5. Press Play in editor, or build to your target XR device.

## Build Notes

- Existing Android build artifact: `firsttestflowstate.apk`
- Build settings and platform config are in `ProjectSettings/`

## Current Features

- XR-ready project scaffold and scene
- Runtime audio track switching via `TrackSwitch`
- Starter ECS structure for future gameplay systems

## Next Improvements

- Document exact controller bindings for `switchTrackAction`
- Add scene-level setup screenshots/gifs
- Expand ECS systems beyond component declarations
