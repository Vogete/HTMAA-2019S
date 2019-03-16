#include <Arduino.h>
#include <stdint.h>
#include "motorControl.h"
#include "ledControl.h"
#include "irSensorControl.h"

#include "AccelStepper.h"

LedControl led1(10);
LedControl led2(11);
LedControl builtInLed(13);
IRSensorControl lineSensor(7);

AccelStepper leftMotor(1, 5, 4); // pin 5 = step, pin 4 = direction
AccelStepper rightMotor(1, 11, 10); // pin 11 = step, pin 10 = direction


void setup()
{
    leftMotor.setMaxSpeed(400);
    leftMotor.setSpeed(400);

    rightMotor.setMaxSpeed(400);
    rightMotor.setSpeed(200);

}

void loop()
{
    if (lineSensor.detectLine()) {
        builtInLed.TurnOn();
        leftMotor.setSpeed(400);
        rightMotor.setSpeed(200);
    } else
    {
        leftMotor.setSpeed(200);
        rightMotor.setSpeed(400);
        builtInLed.TurnOff();
    }

    rightMotor.runSpeed();
    leftMotor.runSpeed();
}


