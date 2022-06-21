#include <Arduino.h>
#include "temperature.h"

TemperatureSensor temperatureSensor;

void setup() {
// write your initialization code here
temperatureSensor.begin();
}

void loop() {
// write your code here
temperatureSensor.update();
}