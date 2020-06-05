#include "Decorator.h"



Decorator::Decorator()
	:house(nullptr)
{
}


Decorator::~Decorator()
{
}

void Decorator::setHouse(House* house)
{
	this->house = house;
}