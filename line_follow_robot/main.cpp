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

AccelStepper testMotor(1, 5, 4); // pin 5 = step, pin 4 = direction


void setup()
{
    testMotor.setMaxSpeed(400);
    testMotor.setSpeed(400);

}

void loop()
{
    if (lineSensor.detectLine()) {
        builtInLed.TurnOn();
    } else
    {
        builtInLed.TurnOff();
    }

    testMotor.runSpeed();
}


