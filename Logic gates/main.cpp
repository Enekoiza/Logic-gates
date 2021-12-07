#include "AndGate.h"
#include "OrGate.h"
#include "NotGate.h"
#include "XOrGate.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool xorPerformGateLogic(bool pin1, bool pin2);

//A function to perform the logic of a XOR gate without using classes
bool xorPerformGateLogic(bool pin1, bool pin2)
{

	//Create 2 different instances of AndGate
	AndGate and1;
	AndGate and2;

	//Create an instance of OrGate
	OrGate or1;

	//Creates 2 different instance of NotGate
	NotGate not1;
	NotGate not2;


	//Creates the logic of the gate using the instances created
	not1.setPin(pin1);
	not2.setPin(pin2);



	and1.setPinA(not1.performGateLogic());
	and1.setPinB(pin2);


	and2.setPinA(pin1);
	and2.setPinB(not2.performGateLogic());



	or1.setPinA(and1.performGateLogic());
	or1.setPinB(and2.performGateLogic());


	return or1.performGateLogic();
}


int main()
{

	//We need to pass 2 values to the function that performs the logic without the use of a class. These values will iterate through all possibilities.
	bool pin1, pin2;



	cout << "-------------MAIN TRUTH TABLE---------------" << endl;

	cout << "PinA" << "\t" << "PinB" << "\t" << "Result" << endl;

	pin1 = false;
	pin2 = false;
												//Call the function that returns the result of performing the operation of an XOR passing the value of 2 pines
	cout << "False" << "\t" << "False" << "\t" << xorPerformGateLogic(pin1, pin2) << endl;

	pin1 = false;
	pin2 = true;

	cout << "True" << "\t" << "False" << "\t" << xorPerformGateLogic(pin1, pin2) << endl;

	pin1 = true;
	pin2 = false;

	cout << "False" << "\t" << "True" << "\t" << xorPerformGateLogic(pin1, pin2) << endl;

	pin1 = true;
	pin2 = true;

	cout << "True" << "\t" << "True " << "\t" << xorPerformGateLogic(pin1, pin2) << endl;


	//Some blank spaces between truth tables
	for (int i = 0; i < 3; i++)
	{
		cout << "\n";
	}


	cout << "-------------CLASS TRUTH TABLE---------------" << endl;
	cout << "PinA" << "\t" << "PinB" << "\t" << "Result" << endl;

	//Using the constructor while creating the XOrGate we also pass to it the first values
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

	for (int i = 0; i < 3; i++)
	{
		cout << "\n";
	}


	return 0;
}