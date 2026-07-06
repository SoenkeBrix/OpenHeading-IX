# Coding Style

## Header block

Every firmware source file shall start with a project header containing:

- Project: OpenHeading-IX
- Version: P0.x.y
- Author: Soenke Brix
- Date: YYYY-MM-DD
- License: MIT
- Description: short description of this file

## General rules

- Use explicit types.
- Prefer named constants over magic numbers.
- Add function prototypes before setup when using Arduino-style sketches.
- Keep hardware-specific code behind a small HAL layer.
- Avoid sensor-specific code in the sensor-fusion engine.
