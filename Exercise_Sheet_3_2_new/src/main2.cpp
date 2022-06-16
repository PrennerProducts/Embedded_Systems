// Do not remove the include below
#include <Arduino.h>
#include "ampel.h"

Ampel ampel;


//The setup function is called once at startup of the sketch
void setup() {
    Serial.begin(115200);
    ampel.begin();
}



// The loop function is called in an endless loop
void loop() {
    ampel.loop();
}
