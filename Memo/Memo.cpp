#include "Memo.h"

#include"Actor.h"

Memo::Memo()
{
}

Memo::Memo(Actor *actor)
{
	name = actor->getname();
	age = actor->getage();
}

Memo::~Memo()
{
}

string Memo::getname()
{
	return name;
}

int Memo::getage()
{
	return age;
}