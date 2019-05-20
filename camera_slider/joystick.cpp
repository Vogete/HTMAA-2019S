#include "joystick.h"
#include <Arduino.h>


Joystick::Joystick(uint8_t pinX, uint8_t pinY, uint8_t pinSW) {
    PinX = pinX;
    PinY = pinY;
    PinSW = pinSW;

    joystickX = new AnalogSensor(pinX);
    joystickY = new AnalogSensor(pinY);
    joystickSW = new DigitalSensor(pinSW);
}

JoystickStatus Joystick::ReadValues() {
    JoystickStatus currentStatus;

    currentStatus.XPos = joystickX->ReadValue();
    currentStatus.YPos = joystickY->ReadValue();
    currentStatus.SWStatus = joystickSW->ReadValue();

    return currentStatus;
}
