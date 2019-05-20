#ifndef _DIGITAL_SENSOR_H_
#define _DIGITAL_SENSOR_H_

#include <stdint.h>

class DigitalSensor
{
private:
    uint8_t Pin;
    int currentStatus;
public:
    DigitalSensor(uint8_t pin);
    int ReadValue();
};



#endif // !_DIGITAL_SENSOR_H_
