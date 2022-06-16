//
// Created by McRebel on 12.06.2022.
//

#ifndef EXERCISE_SHEET_3_2_NEW_AMPEL_H
#define EXERCISE_SHEET_3_2_NEW_AMPEL_H



#include <Arduino.h>
#include "C:\Users\McRebel\Dropbox\MCI\Rechnerstrukturen_&_Embedded_Systems\Exercise_Sheet_3_2_new\lib\Adafruit NeoPixel\Adafruit_NeoPixel.h"
#include <JoystickHigh.h>


#define RGB_LED_PIN A4
#define PIR_PIN      5
#define JOYX_PIN	A0
#define JOYY_PIN	A1
#define LIGHT_PIN   A2
#define LIGHT_THRESHOLD	900

class Ampel {
public:
    Ampel() : rgbLED(1, RGB_LED_PIN, NEO_GRB + NEO_KHZ800), joystick(JOYX_PIN, JOYY_PIN) {}

    void begin();

    void loop();

private:
    Adafruit_NeoPixel rgbLED;
    JoystickHigh joystick;

    uint8_t trafficLightState = 0; // 0 .. red, 1 .. yellow1, 2 .. green, 3 .. blinking green, 4 ... yellow2, 5 .. off
    uint8_t blinkingState = 0; // 0 .. green off, 1 .. green on, 2 .. green off, 3 ... green on
    uint32_t lastStateChangeTime = 0;
    uint8_t pirTriggerState = 0;
    uint8_t buttonTriggerState = 0;

    inline void setTrafficLightColor(uint8_t r, uint8_t g, uint8_t b) {
        rgbLED.setPixelColor(0, r, g, b);
        rgbLED.show();
        Serial.begin(115200);
    }
};


#endif //EXERCISE_SHEET_3_2_NEW_AMPEL_H
