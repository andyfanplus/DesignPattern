#include "SubFactory.h"

#include"subtract.h"

SubFactory::SubFactory()
{
}


SubFactory::~SubFactory()
{
}


IOperation* SubFactory::create()
{
	return new subtract;
}
