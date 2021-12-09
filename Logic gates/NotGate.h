#include "UnaryGate.h"


//Header guard
#ifndef NOTGATE_H
#define NOTGATE_H

//Inherits from UnaryGate
class NotGate : public UnaryGate
{
public:
	//Constructors
	NotGate() {};
	NotGate(bool pin) : UnaryGate(pin) {};

	//Destructor
	~NotGate() {};

	//Its inherited from Unary Gate
	virtual bool performGateLogic();
};






#endif