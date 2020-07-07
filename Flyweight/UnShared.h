#pragma once
#include "Flyweight.h"
class UnShared :
	public Flyweight
{
public:
	UnShared();
	UnShared(int u);
	~UnShared();
	virtual void use();
};

