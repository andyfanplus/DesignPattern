#include "Concrete2.h"



Concrete2::Concrete2()
{
}


Concrete2::~Concrete2()
{
}


Prototype* Concrete2::clone()
{
	return new Concrete2;
}
