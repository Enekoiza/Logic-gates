#include "LogicGate.h"


#ifndef BINARYGATE_H
#define BINARYGATE_H

class BinaryGate : public LogicGate
{
protected:
	bool pinA;
	bool pinB;

public:
	void setPinA(bool newVal);
	void setPinB(bool newVal);
};





#endif