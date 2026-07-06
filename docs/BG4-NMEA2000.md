# BG4 NMEA2000

Project: OpenHeading-IX  
Status: Draft P0

## 1. Function

BG4 outputs OpenHeading-IX attitude and heading values on an NMEA2000-compatible CAN bus.

## 2. Planned electrical interface

- ESP32 internal TWAI controller
- MCP2562 CAN transceiver
- NMEA2000 backbone connection later through Micro-C compatible wiring

## 3. Planned P0 pins

| Function | ESP32 GPIO |
|---|---:|
| CAN TX | GPIO25 |
| CAN RX | GPIO26 |

## 4. Planned PGNs

| PGN | Meaning |
|---:|---|
| 127250 | Vessel Heading |
| 127251 | Rate of Turn |
| 127257 | Attitude |

## 5. Open tasks

- Select NMEA2000 software library.
- Implement PGN 127250 first.
- Add PGN 127251 and PGN 127257.
- Validate recognition by marine chartplotter.
