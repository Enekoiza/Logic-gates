#include "LogicGate.h"

//Header guard
#ifndef BINARYGATE_H
#define BINARYGATE_H


//Inherits from LogicGate
class BinaryGate : public LogicGate
{
//Can only be seen by the inherated classes
protected:
	bool pinA;
	bool pinB;

public:
	//Constructors
	BinaryGate() {};
	BinaryGate(bool pinA, bool pinB);



	//Function to set the value of the pines
	void setPinA(bool newVal);
	void setPinB(bool newVal);
	
	//Inherited from LogicGate and makes this function uninstanceable
	virtual bool performGateLogic() = 0;
};





#endif