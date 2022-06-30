//
// Created by McRebel on 30.06.2022.
//

#include "DIBSE.h"

void DiBSE::setup() {
    rgbLed.begin();
    clapdetection.begin();
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
}

void DiBSE::loop() {
    if (this->shouldBlink) {
        uint32_t currenttime = millis();
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
    clapdetection.loop();

    if (clapdetection.hasClapBeenDetected()) {
        if (clapdetection.getClapCount() == 2) {
            if (digitalRead(LED_PIN) == HIGH) {
                digitalWrite(LED_PIN, LOW);
            } else {
                digitalWrite(LED_PIN, HIGH);
            }
        } else if (clapdetection.getClapCount() == 3) {
            if (shouldBlink) {
                simpleBlinkOff();
            } else {
                simpleBlinkOn(300, 255,0,0);
            }
        }
    }
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