#pragma once
#include "Mediator.h"
class ConcreteMediator :
	public Mediator
{
public:
	ConcreteMediator();
	~ConcreteMediator();
	virtual void send(int message, Colleague* colleague);
};

