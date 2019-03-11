#ifndef _ROBOT_CONTROL_H_
#define _ROBOT_CONTROL_H_

#include <stdint.h>

class RobotControl
{
private:
    uint8_t Motor1Pin;
    uint8_t Motor2Pin;
public:
    RobotControl(uint8_t motor1Pin, uint8_t motor2Pin);
    void TurnLeft();
    void TurnRight();
};



#endif // !_ROBOT_CONTROL_H_
