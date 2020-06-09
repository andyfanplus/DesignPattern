#pragma once
#include "Prototype.h"
class Concrete1 :
	public Prototype
{
public:
	Concrete1();
	~Concrete1();
	virtual Prototype* clone();
};

