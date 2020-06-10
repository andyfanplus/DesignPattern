#pragma once
#include "Command.h"
class ConcreteCommand :
	public Command
{
public:
	ConcreteCommand();
	ConcreteCommand(Receiver *r);
	~ConcreteCommand();
	virtual void execute();
};

