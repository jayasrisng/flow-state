# Flow State Case Study

## Summary

Flow State is a Unity XR rhythm/music prototype exploring immersive interaction with sound. The current build includes an XR scene scaffold, track switching, Unity Input System integration, and early ECS experimentation.

The project is an early but useful artifact for creative technology and Unity XR roles because it shows a clear direction: turning music interaction into a spatial, embodied experience.

## Problem

Music interfaces often flatten interaction into buttons, timelines, or 2D note lanes. XR opens a different design space where audio, motion, presence, and feedback can be arranged around the player.

The project question was:

> How can rhythm interaction feel more spatial, physical, and performative in XR?

## Approach

The prototype starts with a small vertical slice instead of a full game. The goal was to establish the technical base for an immersive music experience:

- XR rig and scene setup.
- Input-driven track switching.
- Runtime audio interaction.
- Early ECS structure for future rhythm systems.
- Build artifact for Android/XR experimentation.

This keeps the project practical: first prove the scene and input loop, then expand into timing, feedback, scoring, and concert-mode presentation.

## Implementation notes

The current project uses:

- Unity `6000.4.1f1`
- XR Interaction Toolkit / XR Origin
- Unity Input System
- C# MonoBehaviour scripts for current prototype behavior
- ECS experiments for future systems architecture

Important files:

- `Assets/Scenes/SampleScene.unity` — main prototype scene
- `Assets/TrackSwitch.cs` — audio track switching behavior
- `Assets/Scripts/ECS/` — early ECS component/system work
- `Assets/XR/` — XR rig and interaction assets

## Design decisions

### Prototype the interaction loop first

A rhythm experience can become over-scoped quickly. I focused first on scene setup, input, and track switching because those are the base conditions for testing music interaction in XR.

### Keep ECS exploratory

The ECS work is intentionally early-stage. It points toward future beat scheduling and reactive systems, but the current README does not overclaim a complete ECS architecture.

### Pair Unity with a web/product companion

The related `flow-state-site` repository gives the project a stronger product-facing layer: onboarding, explanation, and concert-mode framing can live outside the Unity prototype.

## Challenges

### XR input clarity

Track switching and rhythm input need exact controller-binding documentation. Without it, the project is harder for another developer or recruiter to run.

### Scope control

A complete rhythm game requires beat maps, scoring, visual feedback, calibration, and device testing. The current project is better positioned as a vertical slice and systems scaffold.

### Demo quality

The existing video proves direction, but the repo needs a short GIF and still screenshots so the idea is visible immediately on GitHub.

## What this demonstrates

- Unity XR project setup and iteration.
- Ability to prototype immersive music interactions.
- Awareness of gameplay architecture evolution from simple scripts toward ECS systems.
- Creative-technologist framing: translating an emotional media concept into runnable interaction.

## Future work

- Add exact XR controller binding documentation.
- Add README GIF and screenshots.
- Expand ECS into beat timing, interaction windows, and reactive feedback.
- Connect the Unity prototype with the web companion as a complete product demo.
- Add build notes for target XR devices.

## Hiring relevance

Flow State is strongest for Unity developer, XR prototyper, creative technologist, and interactive-media engineering roles. It shows comfort with Unity XR foundations and the ability to explore experience design through code.
