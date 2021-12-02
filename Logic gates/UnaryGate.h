#include "LogicGate.h"

#ifndef UNARYGATE_H
#define UNARYGATE_H

class UnaryGate : public LogicGate
{
protected:
	bool pin;

public:

	void setPin(bool newVal);
};






#endif
