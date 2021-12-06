

//Header guard
#ifndef LOGICGATE_H
#define LOGICGATE_H

//It will be the parent class of the whole project
class LogicGate
{
public:
	//The children will inherit this function but it makes this class uninstanceable
	virtual bool performGateLogic() = 0;
};

#endif