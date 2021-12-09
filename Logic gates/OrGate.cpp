#include "OrGate.h"


//Constructor
//OrGate::OrGate(bool pinA, bool pinB)
//{
//	this->pinA = pinA;
//	this->pinB = pinB;
//}


//Function that performs the logic of this gate
bool OrGate::performGateLogic()
{
	return (pinA | pinB);
}
