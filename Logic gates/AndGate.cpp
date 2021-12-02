#include "AndGate.h"

AndGate::AndGate(bool pinA, bool pinB)
{
	this->pinA = pinA;
	this->pinB = pinB;
}

bool AndGate::performGateLogic()
{
	if ((pinA == true) & (pinB = true)) return true;
	else return false;
}
