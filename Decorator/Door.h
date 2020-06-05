#pragma once
#include "Decorator.h"
class Door :
	public Decorator
{
public:
	Door();
	~Door();
	virtual void show();
};

