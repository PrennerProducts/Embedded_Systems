//
// Created by McRebel on 09.06.2022.
//

#ifndef EXERCISE_SHEET_2_DISTANCE_H
#define EXERCISE_SHEET_2_DISTANCE_H

#include <stdint.h>
#include <Arduino.h>




class DistanceSensor {
public:
    DistanceSensor(uint8_t triggerPin, uint8_t echoPin);

    void begin();

    void update();

    // Returns the distance in cm
    uint16_t getDistance(bool immediate = false);

private:
    uint8_t triggerPin, echoPin;
    uint16_t distance;
};


#endif //EXERCISE_SHEET_2_DISTANCE_H
