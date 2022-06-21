//
// Created by McRebel on 21.06.2022.
//

#ifndef EXERCISE_SHEET_4_TEMPERATURE_H
#define EXERCISE_SHEET_4_TEMPERATURE_H

#include <Arduino.h>
#include <inttypes.h>
#include <Wire.h>

#define I2C_ADDR  0x48


class TemperatureSensor {
public:
    void begin(); // Initialisiert den Sensor.

    void switchToContinuousMode();  // Schaltet den normalen kontinuierlichen Betriebmodus ein.
    void switchToOneShotMode();   // Schaltet den One-Shot Betriebsmodus ein.
    void setResolution(uint8_t res);  // Erlaubt das Einstellen der Messgenauigkeit.
    void update();   //  Liest die aktuelle Temperatur aus und speichert diese zwischen.
    float getTemperature(bool immediate = false);  // Gibt entweder (immediate == false) den von update() zwischengespeicherten Wert zurück, oder liest die aktuelle Temperatur aus (immediate == true, analog zum Joystick-Gerätetreiber auf dem ersten Übungszettel)

};


#endif //EXERCISE_SHEET_4_TEMPERATURE_H
