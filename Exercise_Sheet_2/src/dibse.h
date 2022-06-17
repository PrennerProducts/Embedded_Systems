//
// Created by McRebel on 09.06.2022.
//

#ifndef EXERCISE_SHEET_2_DIBSE_H
#define EXERCISE_SHEET_2_DIBSE_H

#include <stdint.h>
#include <Adafruit_NeoPixel.h>
#include "LedMatrix.h"
#include "distance.h"
#include "C:\Users\McRebel\Dropbox\MCI\Rechnerstrukturen_&_Embedded_Systems\Exercise_Sheet_2\lib\LedMatrix\LedMatrix.h"


#define RGB_LED_PIN A4

// LED Matrix pins
#define LED_LATCH 11
#define LED_DATA 16
#define LED_CLOCK 15

#define DISTANCE_PERIOD	500
#define DISTANCE_TRIGGER 	8
#define DISTANCE_ECHO		4



class DiBSE {
public:
    DiBSE() : rgbLed(1, RGB_LED_PIN, NEO_GRB + NEO_KHZ800),  ledMatrix(LED_LATCH,LED_DATA,LED_CLOCK), distanceSensor(DISTANCE_TRIGGER, DISTANCE_ECHO) {
        memset(distanceBuffer, 0, sizeof(distanceBuffer));
    }

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

    LedMatrix ledMatrix;
    uint32_t lastDistanceMeasurement = 0;

    DistanceSensor distanceSensor;
    uint16_t distanceBuffer[8];
    uint8_t distanceBufferBegin = 0;
};

#endif //EXERCISE_SHEET_2_DIBSE_H
