# BG2 Mainboard / Prototype Platform

Project: OpenHeading-IX  
Status: Draft P0

## 1. Reference hardware P0

- ESP32-WROOM-32 30-pin development board
- OPEN-SMART Easy I/O Shield for ESP32

This is the fixed prototype platform for P0.x development.

## 2. Fixed pin assignment P0

| Function | ESP32 GPIO | Purpose |
|---|---:|---|
| I2C SDA | GPIO21 | BMI323 and BMM350 |
| I2C SCL | GPIO22 | BMI323 and BMM350 |
| UART2 RX | GPIO16 | Pixhawk MAVLink input |
| UART2 TX | GPIO17 | Pixhawk MAVLink output |
| CAN TX | GPIO25 | MCP2562 / NMEA2000 later |
| CAN RX | GPIO26 | MCP2562 / NMEA2000 later |
| USB | UART0 | Debug console |

## 3. Rules

- All P0 firmware shall use this pin map.
- Alternative ESP32 boards are out of scope until explicitly added.
- Any pin change requires documentation update.
