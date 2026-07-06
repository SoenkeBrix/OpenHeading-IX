# SYS-001 System Architecture

Project: OpenHeading-IX  
Status: Draft P0  
Author: Soenke Brix  
License: MIT

## 1. Purpose

OpenHeading-IX is an open-source marine AHRS and heading sensor intended to output heading, rate of turn, pitch and roll for NMEA2000 systems.

## 2. Reference system

Only one external reference system is used during development:

- Pixhawk Pro
- GPS/compass module
- MAVLink output

The reference system is used for comparison and validation, not as the final target hardware.

## 3. Target hardware P0

- ESP32-WROOM-32 30-pin Devboard
- OPEN-SMART Easy I/O Shield for ESP32
- Bosch BMI323 Shuttle Board
- Bosch BMM350 Shuttle Board
- MCP2562 CAN transceiver later for NMEA2000

## 4. Development stages

1. I2C bring-up
2. Raw magnetometer
3. Hard-iron and soft-iron calibration
4. Accelerometer pitch and roll
5. Tilt compensation
6. Gyro drift measurement
7. Complementary filter
8. Madgwick filter
9. Mahony filter
10. EKF
11. NMEA2000 output
12. Pixhawk comparison

## 5. Fixed P0 pin plan

| Function | ESP32 GPIO |
|---|---:|
| I2C SDA | GPIO21 |
| I2C SCL | GPIO22 |
| Pixhawk RX2 | GPIO16 |
| Pixhawk TX2 | GPIO17 |
| CAN TX | GPIO25 |
| CAN RX | GPIO26 |
| Debug | USB |

## 6. Project rule

Every relevant design choice shall be documented with alternatives, reasoning, risks and test evidence.
