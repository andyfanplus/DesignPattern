#pragma once
#include "Prototype.h"
class Concrete2 :
	public Prototype
{
public:
	Concrete2();
	~Concrete2();
	virtual Prototype* clone();
};

