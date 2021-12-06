#include "AndGate.h"
#include "OrGate.h"
#include "NotGate.h"
#include "XOrGate.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

	//We will need 2 AND, 2 NOT and 1 OR gate.
	//We are directly performing the logic of the gate while setting the value of the entry pin for the
	//next gate.
	

	bool pin1 = true;
	bool pin2 = false;

	
	AndGate and1;
	AndGate and2;

	OrGate or1;

	NotGate not1;
	NotGate not2;

	not1.setPin(pin1);
	not2.setPin(pin2);

	and1.setPinA(not1.performGateLogic());
	and1.setPinB(pin2);

	and2.setPinA(pin1);
	and2.setPinA(not2.performGateLogic());

	or1.setPinA(and1.performGateLogic());
	or1.setPinB(and2.performGateLogic());

	cout << or1.performGateLogic();

	XOrGate xor1(false, false);

	cout << "PinA: " << "False" << " PinB: " << "False " << "Result: " << xor1.performGateLogic() << endl;

	xor1.setPinA(true);
	xor1.setPinB(false);

	cout << "PinA: " << "True" << " PinB: " << "False " << "Result: " << xor1.performGateLogic() << endl;

	xor1.setPinA(false);
	xor1.setPinB(true);

	cout << "PinA: " << "False" << " PinB: " << "True " << "Result: " << xor1.performGateLogic() << endl;

	xor1.setPinA(true);
	xor1.setPinB(true);

	cout << "PinA: " << "True" << " PinB: " << "True " << "Result: " << xor1.performGateLogic() << endl;


	return 0;
}