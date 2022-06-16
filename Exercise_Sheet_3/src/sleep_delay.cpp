//
// Created by McRebel on 11.06.2022.
//

#include <Arduino.h>
#include "sleep_delay.h"
#include <avr/sleep.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include <inttypes.h>
#include <avr/interrupt.h>




ISR(WDT_vect) {
    WDTCSR |= (1 << WDIE);
    Serial.println("Hello Serial! ");
}



void sleep_delay(uint32_t seconds) {
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);  // Set sleepMode to power_down
    uint8_t mytime = 0;
    wdt_enable(1);
    sleep_enable();
    while (mytime < seconds){
        WDTCSR |= (1 << WDIE);
        sleep_mode();
        mytime ++;
    }
    sleep_disable();
    wdt_disable();
}

