#ifndef _MOTOR_CONTROL_H_
#define _MOTOR_CONTROL_H_

#include <stdint.h>

class MotorControl
{
private:
    uint8_t MotorPin;
    uint8_t DirectionPin;
public:
    MotorControl(uint8_t motorPin, uint8_t directionPin);
};



#endif // !_MOTOR_CONTROL_H_
