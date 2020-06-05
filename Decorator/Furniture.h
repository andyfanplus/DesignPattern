#pragma once
#include "Decorator.h"
class Furniture :
	public Decorator
{
public:
	Furniture();
	~Furniture();
	virtual void show();

};

