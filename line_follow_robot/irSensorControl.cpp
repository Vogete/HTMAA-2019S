#include "irSensorControl.h"
#include <Arduino.h>



IRSensorControl::IRSensorControl(uint8_t pin) {
    Pin = pin;
    pinMode(Pin, INPUT);
}

bool IRSensorControl::detectLine() {
    if (readDigital() == 0) {
        return true;
    }

    return false;
}

uint8_t IRSensorControl::readDigital() {
    return digitalRead(Pin);
}
