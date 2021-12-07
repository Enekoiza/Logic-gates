#include "BinaryGate.h"

//Header guard
#ifndef ORGATE_H
#define ORGATE_H


//Inherits from BinaryGate
class OrGate : public BinaryGate
{
public:
	//Constructors
	OrGate() {};
	OrGate(bool pinA, bool pinB);

	//Destructor
	~OrGate() {};

	//Inherited from BinaryGate
	virtual bool performGateLogic();
};




#endif