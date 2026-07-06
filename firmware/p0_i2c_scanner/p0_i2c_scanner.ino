/*
 * Project: OpenHeading-IX
 * Version: P0.1.0-M001
 * Author: Soenke Brix
 * Date: 2026-07-06
 * License: MIT
 *
 * Description:
 * M001 sensor bring-up sketch.
 * Scans the ESP32 I2C bus on the fixed P0 pins.
 */

#include <Wire.h>

static constexpr uint8_t I2C_SDA_PIN = 21;
static constexpr uint8_t I2C_SCL_PIN = 22;
static constexpr uint32_t I2C_FREQUENCY_HZ = 400000UL;

void scanI2CBus();
void printAddress(uint8_t address);

void setup()
{
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println("OpenHeading-IX M001 I2C Bring-up");
  Serial.println("Starting I2C bus...");

  Wire.begin(I2C_SDA_PIN, I2C_SCL_PIN, I2C_FREQUENCY_HZ);
}

void loop()
{
  scanI2CBus();
  delay(3000);
}

void scanI2CBus()
{
  uint8_t foundDeviceCount = 0;

  Serial.println();
  Serial.println("I2C scan:");

  for (uint8_t address = 1; address < 127; address++)
  {
    Wire.beginTransmission(address);
    uint8_t error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("  Device found at ");
      printAddress(address);
      foundDeviceCount++;
    }
  }

  if (foundDeviceCount == 0)
  {
    Serial.println("  No I2C devices found.");
  }

  Serial.print("Devices found: ");
  Serial.println(foundDeviceCount);
}

void printAddress(uint8_t address)
{
  Serial.print("0x");
  if (address < 16)
  {
    Serial.print("0");
  }
  Serial.println(address, HEX);
}
