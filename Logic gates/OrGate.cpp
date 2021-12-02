#include "OrGate.h"

OrGate::OrGate(bool pinA, bool pinB)
{
	this->pinA = pinA;
	this->pinB = pinB;
}

bool OrGate::performGateLogic()
{
	if ((pinA == false) & (pinB == false)) return false;
	else return true;
}
