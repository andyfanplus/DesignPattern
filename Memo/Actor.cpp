#include "Actor.h"

#include"Memo.h"



Actor::Actor()
{
}


Actor::~Actor()
{
}


void Actor::setname(string name)
{
	this->name = name;
}


void Actor::setage(int age)
{
	this->age = age;
}


void Actor::setmemo(Memo* memo)
{
	this->name = memo->getname();
	this->age = memo->getage();
}
