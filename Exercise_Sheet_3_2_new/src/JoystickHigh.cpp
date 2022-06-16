//
// Created by McRebel on 12.06.2022.
//

#include "JoystickHigh.h"

#include "JoystickHigh.h"
#include "JoystickHigh.h"
#include <avr/io.h>
#include "Arduino.h"
JoystickHigh::JoystickHigh(int pinX, int pinY): pinX(pinX), pinY(pinY) {
}

void JoystickHigh::begin() {
    DDRE &= ~(1 << PE2);    // PE2 als EIngang
    PORTE &= ~(1 << PE2);   //Pullup-Wiederstand ausgeschaltet
}

void JoystickHigh::update() {
    posX = getPosX(true);
    posY = getPosX(true);


}

int16_t JoystickHigh::getPosX(bool immediate) {
    if(immediate){
        int32_t  pos = map(analogRead(pinX), 0, 1023, -512, 512);
        if(abs(pos <= deadzone)){
            pos = 0;
        }
        return pos;
    }else{
        return posX;
    }
}

int16_t JoystickHigh::getPosY(bool immediate) {
    if(immediate){
        int32_t  pos = map(analogRead(pinY), 0, 1023, -512, 512);
        if(abs(pos <= deadzone)){
            pos = 0;
        }
        return pos;
    }else{
        return posY;
    }
}

bool JoystickHigh::getButton(bool immediate) {
    if(immediate){
        return PINE & (1<< PE2);
    }else{
        return button;
    }
}

void JoystickHigh::setDeadzone(int16_t deadzone) {

}

int16_t JoystickHigh::getDeadzone() {
    return 0;
}