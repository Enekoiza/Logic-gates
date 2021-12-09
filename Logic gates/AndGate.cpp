#include "AndGate.h"

//Constructor
//AndGate::AndGate(bool pinA, bool pinB)
//{
//	this->pinA = pinA;
//	this->pinB = pinB;
//}

//Function that performs the logic of this gate
bool AndGate::performGateLogic()
{
	return (pinA & pinB);
}
