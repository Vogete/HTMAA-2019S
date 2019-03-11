#include "robotControl.h"
#include <Arduino.h>

// Stepper motor control is done with AccelStepper library :)

RobotControl::RobotControl(uint8_t motor1Pin, uint8_t motor2Pin) {
    Motor1Pin = motor1Pin;
    Motor2Pin = motor2Pin;
}


void RobotControl::TurnLeft() {

}

void RobotControl::TurnRight() {

}
