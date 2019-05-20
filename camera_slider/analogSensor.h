#ifndef _ANALOG_SENSOR_H_
#define _ANALOG_SENSOR_H_

#include <stdint.h>

class AnalogSensor
{
private:
    uint8_t Pin;
    int currentStatus;
public:
    AnalogSensor(uint8_t pin);
    int ReadValue();
};



#endif // !_ANALOG_SENSOR_H_
