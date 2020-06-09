#include "Composite.h"



Composite::Composite()
{
}


Composite::~Composite()
{
}


void Composite::add(Component* c)
{
	lists.push_back(c);
}


void Composite::remove(Component* c)
{
	for (auto i = lists.begin(); i != lists.end(); i++)
	{
		if (*i == c)
		{
			i=lists.erase(i);
		}
		if (i == lists.end())
		{
			break;
		}
	}
}
