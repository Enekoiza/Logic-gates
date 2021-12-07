#include "LogicGate.h"


//Header guard
#ifndef UNARYGATE_H
#define UNARYGATE_H

//Inherits from LogicGate
class UnaryGate : public LogicGate
{
//Can only be seen by the inherated classes
protected:
	bool pin;

public:
	//Function to set the value of the pin
	void setPin(bool newVal);

	//Inherited from LogicGate but it makes this class uninstanceable
	virtual bool performGateLogic() = 0;
};






#endif
