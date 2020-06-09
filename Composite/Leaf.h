#pragma once
#include "Component.h"
class Leaf :
	public Component
{
public:
	Leaf();
	~Leaf();
	virtual void add(Component* c);
	virtual void remove(Component* c);
};

