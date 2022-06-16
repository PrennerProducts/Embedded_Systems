//
// Created by McRebel on 12.06.2022.
//

#include "ampel.h"

void Ampel::begin() {
    rgbLED.begin();
    setTrafficLightColor(255, 0, 0);
    pinMode(PIR_PIN, INPUT);
}

void Ampel::loop() {

    auto time = millis();

    auto lightlevel = analogRead(LIGHT_PIN);
    Serial.println(lightlevel);
    if (lightlevel < LIGHT_THRESHOLD && trafficLightState != 5) {
        setTrafficLightColor(0, 0, 0);
        trafficLightState = 5;
        blinkingState = 0;
        lastStateChangeTime = time;
    } else if (lightlevel >= LIGHT_THRESHOLD && trafficLightState == 5) {
        setTrafficLightColor(255, 0, 0);
        trafficLightState = 0;
        lastStateChangeTime = time;
    }

    auto pirState = digitalRead(PIR_PIN);
    if (pirState == HIGH && pirTriggerState == 0) {
        pirTriggerState = 1;
        Serial.println("PIR triggered");
        if (trafficLightState == 2) {
            Serial.println("Switching to red");
            trafficLightState = 3;
            lastStateChangeTime = 0;
            blinkingState = 3;
        } else if (trafficLightState == 0) {
            Serial.println("Stay in red phase longer");
            lastStateChangeTime = time;
        }
    } else if (pirState == LOW) {
        pirTriggerState = 0;
    }

    joystick.update();
    if (joystick.getButton() && buttonTriggerState == 0) {
        buttonTriggerState = 1;
        Serial.println("Button triggered");
        if (trafficLightState == 0) {
            Serial.println("Switching to green");
            lastStateChangeTime = 0;
        } else if (trafficLightState == 2) {
            Serial.println("Stay in green phase longer");
            lastStateChangeTime = time;
        }
    } else if (!joystick.getButton()) {
        buttonTriggerState = 0;
    }

    switch(trafficLightState) {
        case 0: {
            if (time - lastStateChangeTime >= 7000) {
                setTrafficLightColor(255, 255, 0);
                trafficLightState = 1;
                lastStateChangeTime = time;
            }
        } break;
        case 1: {
            if (time - lastStateChangeTime >= 3000) {
                setTrafficLightColor(0, 255, 0);
                trafficLightState = 2;
                lastStateChangeTime = time;
            }
        } break;
        case 2: {
            if (time - lastStateChangeTime >= 5000) {
                setTrafficLightColor(0, 0, 0);
                trafficLightState = 3;
                blinkingState = 0;
                lastStateChangeTime = time;
            }
        } break;
        case 3: {
            if (time - lastStateChangeTime >= 500) {
                if (blinkingState < 3) {
                    blinkingState++;
                    if (blinkingState % 2 == 0) {
                        setTrafficLightColor(0, 0, 0);
                    } else {
                        setTrafficLightColor(0, 255, 0);
                    }
                    lastStateChangeTime = time;
                } else {
                    setTrafficLightColor(255, 255, 0);
                    trafficLightState = 4;
                    lastStateChangeTime = time;
                }
            }
        } break;
        case 4: {
            if (time - lastStateChangeTime >= 3000) {
                setTrafficLightColor(255, 0, 0);
                trafficLightState = 0;
                lastStateChangeTime = time;
            }
        } break;
        case 5: {
            if (time - lastStateChangeTime >= 500) {
                blinkingState++;
                if (blinkingState % 2 == 0) {
                    setTrafficLightColor(0, 0, 0);
                } else {
                    setTrafficLightColor(255, 255, 0);
                }
                lastStateChangeTime = time;
            }
        } break;
    }
}
