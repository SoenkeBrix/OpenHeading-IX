# Codex Briefing

Project: OpenHeading-IX

## Mission

Help develop an open-source marine AHRS and NMEA2000 heading sensor.

## Current phase

P0 sensor bring-up with Shuttle Boards:

- ESP32-WROOM-32 30-pin Devboard
- OPEN-SMART Easy I/O Shield
- Bosch BMI323 Shuttle Board
- Bosch BMM350 Shuttle Board

## Hard constraints

- Keep the project name OpenHeading-IX.
- Use the fixed P0 pin map from docs/BG2-Mainboard.md.
- Do not introduce black-box sensor fusion before simpler stages are implemented.
- Document design decisions and tests.
- Keep the firmware modular.

## Preferred development order

1. I2C scanner firmware.
2. BMI323 chip ID readout.
3. BMM350 chip ID readout.
4. Raw sensor logging.
5. Stationary noise measurement.
6. Magnetometer circle logging.
7. Calibration.
8. Tilt compensation.
9. Complementary filter.
10. More advanced filters later.

## Important note

Before powering the BMM350 Shuttle Board, verify the board-level voltage-domain implementation and pinout.
