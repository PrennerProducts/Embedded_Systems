//
// Created by McRebel on 30.06.2022.
//

#include "ClapDetection.h"

#include <Arduino.h>


void ClapDetection::begin() {
}

void ClapDetection::loop() {
    resultClapCount = 0;
    resultClapDetected = false;

    auto now = millis();

    auto micvalue = analogRead(pin);

    // Mikrofonpegel über bzw. unter Schwellwerten (Peak gemessen)
    if (micvalue > UPPER_THRESHOLD || micvalue < LOWER_THRESHOLD) {
        if (!clapInProgress) {
            clapInProgress = true;
            peakCount = 1;
            clapStartTime = now;
            lastPeakTime = now;
        } else {
            peakCount++;
            lastPeakTime = now;
        }

        //Keinen Peak gemessen
    } else {

        // Klatschen gerade erkannt wurde
        if (clapInProgress) {
            // Letzer Peak zu lange her => Klatschen ist vorbei
            if (now - lastPeakTime >= PEAK_TIMEOUT) {
                auto clapTime = now - clapStartTime;
                if (peakCount >= MIN_PEAK_COUNT && peakCount <= MAX_PEAK_COUNT
                    && clapTime >= MIN_CLAP_TIME && clapTime <= MAX_CLAP_TIME) {
                    Serial.println(F("Clap detected"));
                    clapCount++;
                    lastClapTime = now;
                }
                clapInProgress = false;
            }

        } else {
            // Das letzte Klatschen ist zulange her
            if (clapCount > 0 && now - lastClapTime >= MAX_TIME_BETWEEN_CLAPS) {
                Serial.print(F("#Claps detected: "));
                Serial.println(clapCount);

                resultClapCount = clapCount;
                resultClapDetected = true;

                clapCount = 0;
            }
        }
    }
}