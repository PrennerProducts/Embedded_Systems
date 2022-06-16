//
// Created by McRebel on 12.06.2022.
//

#ifndef EXERCISE_SHEET_3_2_NEW_JOYSTICKHIGH_H
#define EXERCISE_SHEET_3_2_NEW_JOYSTICKHIGH_H

#include "stdint.h"

class JoystickHigh {
public:
    JoystickHigh(int pinX, int pinY);

    void begin();

    void update();

    int16_t getPosX(bool immediate = false);

    int16_t getPosY(bool immediate = false);

    bool getButton(bool immediate = false);

    void setDeadzone(int16_t deadzone);

    int16_t getDeadzone();

private:
    int pinX, pinY;
    int32_t posX = 0, posY = 0;
    int32_t deadzone = 0;
    uint8_t button = 0;


};


#endif //EXERCISE_SHEET_3_2_NEW_JOYSTICKHIGH_H
