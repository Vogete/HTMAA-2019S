#ifndef _JOYSTICK_H_
#define _JOYSTICK_H_

#include <stdint.h>
#include "analogSensor.h"
#include "digitalSensor.h"
#include "joystickStatus.h"

class Joystick
{
private:
    uint8_t PinX;
    uint8_t PinY;
    uint8_t PinSW;
    AnalogSensor* joystickX;
    AnalogSensor* joystickY;
    DigitalSensor* joystickSW;
public:
    Joystick(uint8_t pinX, uint8_t pinY, uint8_t pinSW);
    JoystickStatus ReadValues();
};



#endif // !_JOYSTICK_H_
