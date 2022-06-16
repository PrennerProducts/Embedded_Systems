
#include <Arduino.h>
#include <avr/wdt.h>
#include "sleep_delay.h"



void setup() {
    Serial.begin(115200);
    pinMode(12, OUTPUT);
}

void loop() {
    digitalWrite(12, HIGH);
    Serial.println("Schlafen");
    sleep_delay(5);
    Serial.println("Schlafen");
    digitalWrite(12, LOW);
    Serial.println("Schlaf ende");
    sleep_delay(5);
}


