
#include <Arduino.h>
#include <avr/wdt.h>
#include "sleep_delay.h"

#define LED_PIN 12



void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
}

void loop() {
   // digitalWrite(12, HIGH);
    Serial.println("Schlafen");
    digitalWrite(LED_PIN, HIGH);
    sleep_delay(7);
    digitalWrite(LED_PIN, LOW);
    //sleep_delay(5);
   // Serial.println("Schlafen");
   // digitalWrite(12, LOW);
    Serial.println("Schlaf ende");
    delay(2000);
}


