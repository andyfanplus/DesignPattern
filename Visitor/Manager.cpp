#include "Manager.h"

#include"Visitor.h"

Manager::Manager()
{
}


Manager::~Manager()
{
}

void Manager::accept(Visitor* visitor)
{
	visitor->visit(this);
}