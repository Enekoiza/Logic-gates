#include "UnaryGate.h"

#ifndef NOTGATE_H
#define NOTGATE_H

class NotGate : public UnaryGate
{
public:
	NotGate() {};
	NotGate(bool pin);

	virtual bool perfomGateLogic();
};






#endif