# Roadmap

## P0: Shuttle Board prototype

Goal: Verify sensors, logging and basic algorithms.

Milestones:

- M001 I2C bring-up
- M002 stationary noise
- M003 magnetometer rotation plot
- M004 hard-iron calibration
- M005 soft-iron calibration
- basic pitch and roll
- tilt-compensated heading
- complementary filter

## P1: Pixhawk comparison

Goal: Compare OpenHeading-IX results against the Pixhawk reference.

Milestones:

- MAVLink input from Pixhawk
- synchronized logging
- heading comparison
- pitch and roll comparison
- yaw-rate comparison

## P2: NMEA2000 output

Goal: Output marine heading data on NMEA2000.

Milestones:

- CAN hardware bring-up
- PGN 127250
- PGN 127251
- PGN 127257
- chartplotter recognition

## V1: First custom hardware

Goal: Replace Shuttle Boards with a documented custom PCB.
