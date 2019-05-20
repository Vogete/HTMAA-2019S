#include "digitalSensor.h"
#include <Arduino.h>

DigitalSensor::DigitalSensor(uint8_t pin) {
    Pin = pin;
    pinMode(Pin, INPUT);
}

int DigitalSensor::ReadValue() {
    currentStatus = digitalRead(Pin);
    return currentStatus;
}
