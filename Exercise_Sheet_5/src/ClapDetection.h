//
// Created by McRebel on 30.06.2022.
//

#ifndef EXERCISE_SHEET_5_CLAPDETECTION_H
#define EXERCISE_SHEET_5_CLAPDETECTION_H


#include <stdint.h>

#define UPPER_THRESHOLD			500
#define LOWER_THRESHOLD			100
#define PEAK_TIMEOUT			10
#define MIN_PEAK_COUNT 			70
#define MAX_PEAK_COUNT 			120
#define MIN_CLAP_TIME			20
#define MAX_CLAP_TIME			40
#define MAX_TIME_BETWEEN_CLAPS	800


class ClapDetection {
public:
    ClapDetection(uint8_t pin) : pin(pin) {}

    void begin();
    void loop();

    bool hasClapBeenDetected() { return resultClapDetected; }
    uint16_t getClapCount() { return resultClapCount; }

private:
    uint8_t pin;
    bool clapInProgress = false;
    uint16_t peakCount = 0;
    uint32_t clapStartTime = 0;
    uint32_t lastPeakTime = 0;
    uint32_t lastClapTime = 0;
    uint16_t clapCount = 0;

    uint16_t resultClapCount = 0;
    bool resultClapDetected = false;
};



#endif //EXERCISE_SHEET_5_CLAPDETECTION_H
