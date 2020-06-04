#include "AddFactory.h"

#include"Add.h"

AddFactory::AddFactory()
{
}


AddFactory::~AddFactory()
{
}


IOperation* AddFactory::create()
{
	return new Add;
}
