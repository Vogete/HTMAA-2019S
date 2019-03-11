#include "ledControl.h"
#include <Arduino.h>


LedControl::LedControl(uint8_t pin){
    Pin = pin;
    pinMode(Pin, OUTPUT);
}

void LedControl::TurnOn(){
    digitalWrite(Pin, HIGH);
}

void LedControl::TurnOff(){
    digitalWrite(Pin, LOW);
}

void LedControl::GetStatus(){

}

void LedControl::Toggle(){

}

