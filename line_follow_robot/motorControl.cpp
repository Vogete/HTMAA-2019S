#include "motorControl.h"
#include <Arduino.h>

// Stepper motor control is done with AccelStepper library :)
#include "AccelStepper.h"

MotorControl::MotorControl(uint8_t motorPin, uint8_t directionPin) {
    MotorPin = motorPin;
    DirectionPin = directionPin;
}

