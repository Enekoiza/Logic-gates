#include "XOrGate.h"


//Constructor
XOrGate::XOrGate(bool pinA, bool pinB)
{
	this->pinA = pinA;
	this->pinB = pinB;
}


//Function that performs the logic of this gate
bool XOrGate::performGateLogic()
{
	return pinA ^ pinB;
}
