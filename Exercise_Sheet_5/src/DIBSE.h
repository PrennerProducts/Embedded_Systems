//
// Created by McRebel on 30.06.2022.
//

#ifndef EXERCISE_SHEET_5_DIBSE_H
#define EXERCISE_SHEET_5_DIBSE_H

#include <stdint.h>
#include <Adafruit_NeoPixel.h>
#include "ClapDetection.h"

#define RGB_LED_PIN A4
#define LED_PIN 	12
#define MIC_PIN 	A3

class DiBSE {
public:
    DiBSE() : rgbLed(1, RGB_LED_PIN, NEO_GRB + NEO_KHZ800), clapdetection(MIC_PIN) {}

    void setup();
    void loop();

    void simpleBlinkOn(uint16_t duration, uint8_t red, uint8_t green, uint8_t blue);
    void simpleBlinkOff();

private:
    Adafruit_NeoPixel rgbLed;
    bool shouldBlink = false;
    bool ledIsOn = false;
    uint16_t duration = 0;
    uint8_t red = 0;
    uint8_t green = 0;
    uint8_t blue = 0;
    uint32_t lastLEDToggle = 0;
    ClapDetection clapdetection;
};



#endif //EXERCISE_SHEET_5_DIBSE_H
