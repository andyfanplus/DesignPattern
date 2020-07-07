#pragma once
#include "Flyweight.h"
class Shared :
	public Flyweight
{
public:
	Shared();
	Shared(int u);
	~Shared();
	virtual void use();
};

