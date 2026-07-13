# Flow State

**An immersive rhythm prototype exploring how music interaction changes when sound becomes spatial.**

Flow State is a Unity XR prototype for music-driven interaction. The current build includes an XR-ready scene, runtime track switching, controller/input plumbing, and early ECS experimentation for future gameplay systems.

The project is positioned as a vertical slice for immersive music experiences: part rhythm-game prototype, part concert-mode interaction study, and part Unity XR systems scaffold.

## Demo

https://github.com/user-attachments/assets/221e2f25-0f10-4195-b18b-62727408e56e

Related web/product companion: [flow-state-site](https://github.com/jayasrisng/flow-state-site)

## Why this exists

Most rhythm games treat music as a timeline on a flat screen. XR creates a different design space: sound can surround the player, feedback can live in the body, and interactions can be staged like a performance instead of a menu.

Flow State explores this question:

> What does a rhythm experience feel like when the player is inside the music system instead of looking at it?

## Current features

- Unity XR project scaffold with XR Origin setup.
- Playable sample scene.
- Runtime audio track switching through `TrackSwitch`.
- Unity Input System integration.
- Starter ECS structure for future beat, interaction, and scoring systems.
- Existing Android build artifact: `firsttestflowstate.apk`.

## Tech stack

- Unity `6000.4.1f1`
- C#
- XR Interaction Toolkit / XR Origin setup
- Unity Input System
- MonoBehaviour gameplay scripts
- Early Unity ECS experimentation

## Project structure

```text
Assets/Scenes/SampleScene.unity   Main prototype scene
Assets/TrackSwitch.cs             Input-driven music track switching
Assets/Scripts/ECS/               ECS component and system experiments
Assets/XR/                        XR rig and XR-related assets
docs/demo/                        Existing demo media
ProjectSettings/                  Unity project configuration
```

## How to run

1. Install Unity Hub and Unity Editor `6000.4.1f1`.
2. Clone this repository.
3. Add the folder as a Unity project.
4. Open `Assets/Scenes/SampleScene.unity`.
5. Press Play in the editor, or build to a configured XR/Android target.

## Case study

Read the portfolio case study: [docs/case-study.md](docs/case-study.md)

## Media

Media capture notes and target assets are tracked in [media/README.md](media/README.md).

## Current limitations

- Controller bindings for `switchTrackAction` need clearer documentation.
- ECS work is still exploratory; most current behavior is prototype-level.
- The project needs scene screenshots/GIFs added directly to the README.
- Build and device testing should be documented for each supported XR target.

## Future work

- Add a 10–15 second README GIF of track switching and spatial interaction.
- Document exact XR controller bindings.
- Expand ECS systems into beat timing, scoring, and reactive visual feedback.
- Connect the Unity prototype more tightly with the `flow-state-site` onboarding/product demo.
- Add a short architecture note explaining MonoBehaviour vs ECS responsibilities.

## Role fit

Flow State is relevant for Unity developer, XR prototyper, creative technologist, and interactive media roles. It demonstrates rapid Unity XR exploration, audio-interaction design, and a path from prototype mechanics toward a more complete immersive experience.
