#include "NotGate.h"


//Constructor
NotGate::NotGate(bool pin)
{
	this->pin = pin;
}


//Perform the logic of this gate
bool NotGate::performGateLogic()
{
	return (!pin);
}
