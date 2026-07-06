# Design Decisions

Project: OpenHeading-IX

## D001 Project name

Decision: The project is named OpenHeading-IX.

Reason: The name gives the project its own identity and avoids unnecessary proximity to commercial product names.

## D002 Development reference

Decision: Use only one external reference system: the existing Pixhawk Pro with GPS/compass.

Reason: The Pixhawk is already available and provides a mature AHRS reference without requiring an additional purchase.

## D003 Prototype hardware

Decision: P0 uses Shuttle Boards instead of custom PCB hardware.

Reason: This allows early firmware, calibration and measurement work before PCB design.

## D004 Sensor-fusion development order

Decision: Start with simple raw-sensor stages and proceed stepwise toward advanced filters.

Reason: This maximizes learning and makes failures easier to diagnose.

## D005 Fixed P0 ESP32 platform

Decision: P0 uses the ESP32-WROOM-32 30-pin Devboard on the OPEN-SMART Easy I/O Shield.

Reason: This is the available lab platform and offers a clean pin breakout for prototyping.
