#include <Arduino.h>
#include "dibse.h"
#include "distance.h"



DiBSE dibse;
DistanceSensor distanceSensor(DISTANCE_TRIGGER, DISTANCE_ECHO);

//The setup function is called once at startup of the sketch
void setup() {
    Serial.begin(114500);
    dibse.setup();
    dibse.simpleBlinkOn(1000, 0, 255, 0);
    distanceSensor.begin();
}

// The loop function is called in an endless loop
void loop() {
    dibse.loop();
    delay(10);
}