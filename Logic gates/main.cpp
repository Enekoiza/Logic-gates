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
	
	
	bool pin1 = false;
	bool pin2 = false;

	
	AndGate and1;
	AndGate and2;

	OrGate or1;

	NotGate not1;
	NotGate not2;

	not1.setPin(pin1);
	not2.setPin(pin2);

	cout << "not1 " << not1.performGateLogic();
	cout << "not2 " << not2.performGateLogic();


	and1.setPinA(not1.performGateLogic());
	and1.setPinB(pin2);

	cout << "and1 " << and1.performGateLogic();

	and2.setPinA(pin1);
	and2.setPinA(not2.performGateLogic());

	cout << "and2 " << and2.performGateLogic();


	or1.setPinA(and1.performGateLogic());
	or1.setPinB(and2.performGateLogic());


	/*cout << "Pin A" << "\t" << "PinB" << "\t" << "Result" << endl;

	pin1 = false;
	pin2 = false;

	cout << "False" << "\t" << "False" << "\t" << or1.performGateLogic() << endl;

	pin1 = false;
	pin2 = true;

	cout << "True" << "\t" << "False" << "\t" << or1.performGateLogic() << endl;

	pin1 = true;
	pin2 = false;

	cout << "False" << "\t" << "True" << "\t" << or1.performGateLogic() << endl;

	pin1 = true;
	pin2 = true;

	cout << "True" << "\t" << "True " << "\t" << or1.performGateLogic() << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "\n";
	}

	cout << "Pin A" << "\t" << "PinB" << "\t" << "Result" << endl;

	XOrGate xor1(false, false);

	cout <<  "False" << "\t" << "False" << "\t" << xor1.performGateLogic() << endl;

	xor1.setPinA(true);
	xor1.setPinB(false);

	cout << "True" << "\t" << "False" << "\t" << xor1.performGateLogic() << endl;

	xor1.setPinA(false);
	xor1.setPinB(true);

	cout << "False" << "\t" << "True" << "\t" << xor1.performGateLogic() << endl;

	xor1.setPinA(true);
	xor1.setPinB(true);

	cout << "True" << "\t" << "True " << "\t" << xor1.performGateLogic() << endl;


	return 0;*/
}