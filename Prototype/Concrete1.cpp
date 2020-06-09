#include "Concrete1.h"



Concrete1::Concrete1()
{
}


Concrete1::~Concrete1()
{
}


Prototype* Concrete1::clone()
{
	return new Concrete1;
}
