#ifndef _LED_CONTROL_H_
#define _LED_CONTROL_H_

#include <stdint.h>

class LedControl
{
private:
    uint8_t Pin;
    uint8_t status;
public:
    LedControl(uint8_t pin);
    void TurnOn();
    void TurnOff();
    void GetStatus();
    void Toggle();
};



#endif // !_LED_CONTROL_H_
