#include "NotGate.h"

NotGate::NotGate(bool pin)
{
	this->pin = pin;
}

bool NotGate::perfomGateLogic()
{
	if (pin == true) return false;
	else return true;
}
