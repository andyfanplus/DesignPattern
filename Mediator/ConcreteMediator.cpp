#include "ConcreteMediator.h"

#include"Colleague.h"

ConcreteMediator::ConcreteMediator()
{
}


ConcreteMediator::~ConcreteMediator()
{
}


void ConcreteMediator::send(int message, Colleague* colleague)
{
	if (c1 == colleague)
	{
		c2->received(message);
	}
	else
	{
		c1->received(message);
	}
}
