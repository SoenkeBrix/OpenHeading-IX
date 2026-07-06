# OpenHeading-IX

Open-source marine AHRS and NMEA2000 heading sensor.

## Goals

- Build modern open AHRS/heading hardware.
- Use well-available components.
- Support NMEA2000 heading, rate-of-turn and attitude data.
- Validate against one reference system: Pixhawk Pro with GPS/compass.
- Document every design decision and measurement.

## Prototype platform P0

- ESP32-WROOM-32 30-pin Devboard
- OPEN-SMART Easy I/O Shield for ESP32
- Bosch BMI323 Shuttle Board
- Bosch BMM350 Shuttle Board
- Pixhawk Pro reference system
- MCP2562 CAN transceiver later for NMEA2000

## Repository layout

- docs: project and engineering documentation
- firmware: ESP32 firmware
- hardware/KiCad: schematics and PCB data
- lab/measurements: measurement protocols
- images: photos and diagrams

## Development principle

No claims without measurements. No black boxes without understanding. No undocumented design decisions.
