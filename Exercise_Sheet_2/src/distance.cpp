//
// Created by McRebel on 09.06.2022.
//

#include "distance.h"
#include <Arduino.h>

DistanceSensor::DistanceSensor(uint8_t triggerPin, uint8_t echo_pin) {
    pinMode(triggerPin,INPUT);
    pinMode(echo_pin, OUTPUT);
    triggerPin= triggerPin;
    echo_pin = echo_pin;
}



uint16_t DistanceSensor::getDistance(bool immediate) {
    if (immediate) {
        // To start the measurement set trigger pin to HIGH for 10uS
        digitalWrite(triggerPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(triggerPin, LOW);

        // Measure time echo pin is HIGH
        uint32_t measurement = pulseIn(echoPin, HIGH);
        distance = measurement / 58; // * 0.01715;

        return distance;
    } else {
        return distance;
    }
}

void DistanceSensor::begin() {
    pinMode(triggerPin, OUTPUT);
    digitalWrite(triggerPin, LOW);
    pinMode(echoPin, INPUT);
}

void DistanceSensor::update() {
    distance = getDistance(true);

}
