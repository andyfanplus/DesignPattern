#include "Mediator.h"

#include"Colleague.h"

Mediator::Mediator()
{
}


Mediator::~Mediator()
{
}


void Mediator::setcolleague1(Colleague* colleague)
{
	this->c1 = colleague;
}


void Mediator::setcolleague2(Colleague* colleague)
{
	this->c2 = colleague;
}
