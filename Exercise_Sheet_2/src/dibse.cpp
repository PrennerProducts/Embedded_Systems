//
// Created by McRebel on 09.06.2022.
//


#include "dibse.h"
#include "Arduino.h"


void DiBSE::setup() {
    rgbLed.begin();
    distanceSensor.begin();
}

void DiBSE::loop() {
    uint32_t currenttime = millis();
    if (this->shouldBlink) {
        if (currenttime - lastLEDToggle >= this->duration) {
            if (this->ledIsOn) {
                this->rgbLed.setPixelColor(0, 0, 0, 0);
                this->ledIsOn = false;
            } else {
                this->rgbLed.setPixelColor(0, red, green, blue);
                this->ledIsOn = true;
            }
            this->rgbLed.show();
            lastLEDToggle = currenttime;
        }
    }

    if (currenttime - lastDistanceMeasurement >= DISTANCE_PERIOD) {
        uint16_t d = distanceSensor.getDistance(true);
        distanceBuffer[distanceBufferBegin] = d;
        distanceBufferBegin = (distanceBufferBegin + 1) % 8;
        lastDistanceMeasurement = currenttime;
        uint8_t period = d*50;
        simpleBlinkOn(period, 255, 0, 0);
        Serial.print(F("Distance: "));
        Serial.println(d);
    }

    // Clears the display buffer.
    ledMatrix.clear();

    for (uint8_t i = 0; i < 8; i++) {
        uint16_t d = distanceBuffer[(distanceBufferBegin + i) % 8];
        uint8_t pixel = 8 - (d / 10);
        for (uint8_t j = 0; j < pixel; j++) {
            ledMatrix.drawPixel(i, j, true);
        }
    }

    // Display everything on the display.
    ledMatrix.update();
}

void DiBSE::simpleBlinkOn(uint16_t duration, uint8_t red, uint8_t green, uint8_t blue) {
    this->duration = duration;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->shouldBlink = true;
    this->ledIsOn = false;
}

void DiBSE::simpleBlinkOff() {
    this->shouldBlink = false;
}