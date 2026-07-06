# BG0 Reference System: Pixhawk

Project: OpenHeading-IX  
Status: Draft P0

## 1. Function

The Pixhawk reference system provides comparison values for:

- heading
- pitch
- roll
- yaw rate

## 2. Known hardware

- Pixhawk Pro class flight controller
- External GPS/compass module based on u-blox NEO-6M class hardware

The exact internal IMU and compass inventory shall be identified during BG0 bring-up.

## 3. Interface

Pixhawk data will be read through MAVLink via TELEM/UART.

Planned connection:

| Pixhawk | ESP32 |
|---|---|
| TX | RX2 GPIO16 |
| RX | TX2 GPIO17 |
| GND | GND |

## 4. Role in project

The Pixhawk is not the final product. It is the single external reference used to validate OpenHeading-IX sensor fusion and NMEA2000 output.

## 5. Open tasks

- Identify Pixhawk hardware revision.
- Read ArduPilot/PX4 firmware state.
- Identify detected compass and IMU devices.
- Confirm MAVLink message availability.
