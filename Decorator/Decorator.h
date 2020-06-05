#pragma once
#include "House.h"
class Decorator :
	public House
{
public:
	Decorator();
	~Decorator();
	void setHouse(House* house) ;
	virtual void show() = 0;
protected:
	House *house;
};

