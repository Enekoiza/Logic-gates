#include "BinaryGate.h"


#ifndef ANDGATE_H
#define ANDGATE_H

class AndGate : public BinaryGate
{
public:
	AndGate() {};
	AndGate(bool pinA, bool pinB);
	
	virtual bool performGateLogic();

};






#endif
