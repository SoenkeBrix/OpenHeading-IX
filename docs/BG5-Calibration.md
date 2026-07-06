# BG5 Calibration

Project: OpenHeading-IX  
Status: Draft P0

## 1. Function

BG5 handles all calibration steps required to transform raw sensor readings into usable physical values for sensor fusion.

## 2. Planned calibration stages

- gyro zero-rate offset
- accelerometer offset and scale checks
- magnetometer hard-iron correction
- magnetometer soft-iron correction
- axis alignment between BMI323 and BMM350
- temperature observations

## 3. Development order

1. Static gyro offset measurement.
2. Magnetometer rotation plot.
3. Hard-iron correction.
4. Soft-iron correction.
5. Tilt-compensated heading validation.

## 4. Open questions

- Where to store calibration values on ESP32.
- Whether calibration is performed by firmware, PC tool or both.
- Which validation criteria are required before NMEA2000 output is enabled.
