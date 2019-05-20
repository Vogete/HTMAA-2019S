#include "analogSensor.h"
#include <Arduino.h>

AnalogSensor::AnalogSensor(uint8_t pin) {
    Pin = pin;
}

int AnalogSensor::ReadValue() {
    currentStatus = analogRead(Pin);
    return currentStatus;
}
