#include "BinaryGate.h"


//Header guard
#ifndef XORGATE_H
#define XORGATE_H


//Inherits from BinaryGate
class XOrGate : public BinaryGate
{
public:
	//Constructors
	XOrGate() {};
	XOrGate(bool pinA, bool pinB);

	//Destructors
	~XOrGate() {};

	//Inherited from BinaryGate
	virtual bool performGateLogic();
};




#endif