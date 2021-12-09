#include "BinaryGate.h"


//Constructors

BinaryGate::BinaryGate(bool pinA, bool pinB)
{
	this->pinA = pinA;
	this->pinB = pinB;
}

//Functions to set the value of the gates entry pins that inherits from this class

void BinaryGate::setPinA(bool newVal)
{
	this->pinA = newVal;
}

void BinaryGate::setPinB(bool newVal)
{
	this->pinB = newVal;
}
