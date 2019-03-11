#ifndef _IR_SENSOR_CONTROL_H_
#define _IR_SENSOR_CONTROL_H_

#include <stdint.h>

class IRSensorControl
{
private:
    uint8_t Pin;
public:
    IRSensorControl(uint8_t pin);
    uint8_t readDigital();
    bool detectLine();
};



#endif // !_IR_SENSOR_CONTROL_H_
