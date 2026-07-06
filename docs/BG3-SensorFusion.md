# BG3 Sensor Fusion

Project: OpenHeading-IX  
Status: Draft P0

## 1. Function

BG3 converts raw sensor values into attitude and heading values.

## 2. Development philosophy

Advanced algorithms shall only be introduced after the simpler stages are implemented and understood.

## 3. Planned stages

1. Magnetometer-only heading
2. Magnetometer calibration
3. Accelerometer pitch and roll
4. Tilt-compensated heading
5. Gyro integration and drift analysis
6. Complementary filter
7. Madgwick filter
8. Mahony filter
9. Extended Kalman Filter

## 4. Internal representation

The long-term architecture should use quaternions internally and convert to heading, pitch and roll only at the output boundary.

## 5. Validation

All sensor-fusion stages shall be compared against the Pixhawk reference system where applicable.
