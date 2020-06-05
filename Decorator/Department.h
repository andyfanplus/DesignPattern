#pragma once
#include "House.h"
class Department :
	public House
{
public:
	Department();
	~Department();
	virtual void show();
};

