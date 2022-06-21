//
// Created by McRebel on 21.06.2022.
//

#include "temperature.h"

void TemperatureSensor::begin() {
    //Config serial interface
    Serial.begin(115200);

    //Start I2C Bus
    Wire.begin();

    //Configure TCN75A temperatur sensor
    Wire.beginTransmission(I2C_ADDR); // Start I2C Transmission
    Wire.write(0x01); // Select Configuration Register
    Wire.write(
            (3 << 5) // Resolution 12-bit
            | (3 << 3) // Fault queue length: 6
            | (1 << 2) // Alert polarity: Active-high
            | (1 << 1) // Alert pin interrupt mode
    );
    Wire.endTransmission(); // End I2C Transmission

}

void TemperatureSensor::switchToContinuousMode() {

}

void TemperatureSensor::switchToOneShotMode() {

}

void TemperatureSensor::setResolution(uint8_t res) {

}

void TemperatureSensor::update() {

    /*
    * Read temperature from sensor
    */

    // First we need to select the data register
    Wire.beginTransmission(I2C_ADDR); // Start I2C Transmission
    Wire.write(0x00); // Select Data Register
    Wire.endTransmission(); // End I2C Transmission

    // Then we can request data from the sensor
    Wire.requestFrom(I2C_ADDR, 2); // Request 2 byte data from sensor (data register is a 16-bit register)
    if (Wire.available() == 2 ) {
        uint8_t buffer[2];
        Wire.readBytes(buffer, 2); // Read data from sensor
        // buffer[0] contains the digit before the decimal point
        // buffer[1] contains the digits after the decimal point shifted to the left
        // left as exercise to the reader to properly handle it
        Serial.print("Temperature: ");
        float myTemp = (buffer[0] << 8 | buffer[1]) /256;
        Serial.println(myTemp );
    } else {
        Serial.println("Error while reading data from sensor");
    }
    delay(1000);
}

float TemperatureSensor::getTemperature(bool immediate) {
    return 0;
}

