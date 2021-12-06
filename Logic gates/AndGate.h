#include "BinaryGate.h"

//Header guard
#ifndef ANDGATE_H
#define ANDGATE_H

//Inherits from BinaryGate
class AndGate : public BinaryGate
{
public:
	//Constructor
	AndGate() {};
	AndGate(bool pinA, bool pinB);

	//Destructor
	~AndGate() {};
	
	//Inherited from BinaryGate
	virtual bool performGateLogic();

};






#endif
