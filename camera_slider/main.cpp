#include <Arduino.h>
#include <stdint.h>
#include "AccelStepper.h"
#include "joystick.h"
#include "joystickStatus.h"

// StepperMotor rotateMotor = StepperMotor(5, 4);
// StepperMotor tiltMotor = StepperMotor(6, 7);
// StepperMotor rotateMotor = StepperMotor(3, 4);

AccelStepper rotateMotor(1, 9, 10); // 1 = driver,  pin 5 = step, pin 4 = direction
AccelStepper tiltMotor(1, 6, 7); // 1 = driver,  pin 6 = step, pin 7 = direction
Joystick leftJoystick = Joystick(2, 1, 13); // A1, A2, 13



float determineMotorSpeed(int inputValue) {
    int roundingRate = 50;
    int analogMaxValue = 1023;

    float motorspeed = floor(inputValue / roundingRate);
    motorspeed = motorspeed - floor(analogMaxValue / roundingRate / 2);
    motorspeed = motorspeed * roundingRate;

    return motorspeed;
}


void setup()
{
    rotateMotor.setMaxSpeed(1000);
    tiltMotor.setMaxSpeed(1000);
    Serial.begin(115200);
}

void loop()
{
    JoystickStatus leftJoystickStatus;
    leftJoystickStatus = leftJoystick.ReadValues();

    Serial.print("X: ");
    Serial.print(leftJoystickStatus.XPos);
    Serial.print("\r\n");
    Serial.print("Y: ");
    Serial.print(leftJoystickStatus.YPos);
    Serial.print("\r\n");

    float rotateMotorSpeed = determineMotorSpeed(leftJoystickStatus.XPos) * (-1);
    rotateMotor.setSpeed(rotateMotorSpeed);

    float tiltMotorSpeed = determineMotorSpeed(leftJoystickStatus.YPos);
    tiltMotor.setSpeed(tiltMotorSpeed);

    rotateMotor.runSpeed();
    tiltMotor.runSpeed();
}
