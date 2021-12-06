#include "LogicGate.h"


//Header guard
#ifndef UNARYGATE_H
#define UNARYGATE_H

//Inherits from LogicGate
class UnaryGate : public LogicGate
{
protected:
	bool pin;

public:
	void setPin(bool newVal);

	//Inherited from LogicGate but it makes this class uninstanceable
	virtual bool performGateLogic() = 0;
};






#endif
