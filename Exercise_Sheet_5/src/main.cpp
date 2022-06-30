#include "Arduino.h"
#include "DIBSE.h"



/*
 * Audio Signal
 *
 * Baseline: 330
 * Min: 9
 * Max: 586
 */

DiBSE dibse;

//The setup function is called once at startup of the sketch
void setup() {
    Serial.begin(115200);
    dibse.setup();
}

// The loop function is called in an endless loop
void loop() {
    dibse.loop();
}