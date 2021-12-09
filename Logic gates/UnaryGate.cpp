#include "UnaryGate.h"

//Constructors

UnaryGate::UnaryGate(bool pin)
{
	this->pin = pin;
}

//Function that gives value to the pin of the class that inherits from this class
void UnaryGate::setPin(bool newVal)
{
	this->pin = newVal;
}
