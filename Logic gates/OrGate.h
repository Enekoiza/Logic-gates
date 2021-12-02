#include "BinaryGate.h"


#ifndef ORGATE_H
#define ORGATE_H

class OrGate : public BinaryGate
{
public:
	OrGate() {};
	OrGate(bool pinA, bool pinB);

	virtual bool performGateLogic();
};




#endif