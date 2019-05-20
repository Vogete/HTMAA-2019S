#include <Arduino.h>
#include <stdint.h>
#include "motorControl.h"
#include "ledControl.h"
#include "irSensorControl.h"

#include "AccelStepper.h"

// LedControl led1(10);
// LedControl led2(11);
LedControl builtInLed(13);
IRSensorControl lineSensor(7);

AccelStepper leftMotor(1, 5, 4); // 1 = driver,  pin 5 = step, pin 4 = direction
AccelStepper rightMotor(1, 11, 10); //1 = driver,  pin 11 = step, pin 10 = direction

float slowSpeed = 25;
float fastSpeed = 150;


void setup()
{
    leftMotor.setMaxSpeed(fastSpeed);
    leftMotor.setSpeed(fastSpeed * -1);

    rightMotor.setMaxSpeed(fastSpeed);
    rightMotor.setSpeed(fastSpeed * -1);

}

void loop()
{
    if (lineSensor.detectLine()) {
        builtInLed.TurnOn();
        leftMotor.setSpeed(fastSpeed * -1);
        rightMotor.setSpeed(slowSpeed);
    } else
    {
        builtInLed.TurnOff();
        leftMotor.setSpeed(slowSpeed * -1);
        rightMotor.setSpeed(fastSpeed);
    }

    rightMotor.runSpeed();
    leftMotor.runSpeed();
}



