//
// Created by McRebel on 11.06.2022.
//

#include <Arduino.h>
#include "sleep_delay.h"
#include <avr/sleep.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdint.h>
#include <avr/interrupt.h>



// Interrupt service Routine
ISR(WDT_vect) {}



void sleep_delay(uint32_t seconds) {
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);  // Set sleepMode to power_down
    while (seconds > 0){
        uint8_t  wdt_time_param;
        if(seconds >= 8){
            wdt_time_param = WDTO_8S;
            seconds-= 8;
        }
        else if(seconds >=4 ){
            wdt_time_param = WDTO_4S;
            seconds -= 4;
        }else if(seconds >=2 ) {
            wdt_time_param = WDTO_2S;
            seconds-=2;
        }else{
            wdt_time_param = WDTO_1S;
        }
        //configure watchdog time
        wdt_enable(wdt_time_param);

        //Enabele Watchdog Interrupt
        WDTCSR |= (1<< WDIE);

        //enter sleep mode
        sleep_mode();
        seconds --;
    }
    wdt_disable();

}

