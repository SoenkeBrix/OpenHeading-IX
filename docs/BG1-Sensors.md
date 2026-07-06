# BG1 Sensors

Project: OpenHeading-IX  
Status: Draft P0

## 1. Function

BG1 provides raw inertial and magnetic sensor data for OpenHeading-IX.

## 2. P0 sensor platform

- Bosch BMI323 Shuttle Board
  - accelerometer
  - gyroscope
- Bosch BMM350 Shuttle Board
  - magnetometer

## 3. Interface

Both sensors are planned on the ESP32 I2C bus:

| Signal | ESP32 GPIO |
|---|---:|
| SDA | GPIO21 |
| SCL | GPIO22 |

## 4. Bring-up caution

Before wiring the BMM350 Shuttle Board, its exact supply concept must be checked. The BMM350 sensor core and digital interface may use different voltage domains depending on the shuttle board implementation.

## 5. Development order

1. I2C scan
2. Chip ID / WHO_AM_I readout
3. Raw accelerometer data
4. Raw gyroscope data
5. Raw magnetometer data
6. Stationary noise measurement
7. Magnetometer rotation plot
8. Calibration

## 6. Open tasks

- Document Shuttle Board pinout with photos.
- Verify voltage rails.
- Verify pull-up configuration.
- Determine exact I2C addresses.
