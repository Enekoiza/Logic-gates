#include "LogicGate.h"

//Header guard
#ifndef BINARYGATE_H
#define BINARYGATE_H


//Inherits from LogicGate
class BinaryGate : public LogicGate
{

protected:
	bool pinA;
	bool pinB;

public:
	//
	void setPinA(bool newVal);
	void setPinB(bool newVal);
	
	//Inherited from LogicGate and makes this function uninstanceable
	virtual bool performGateLogic() = 0;
};





#endif