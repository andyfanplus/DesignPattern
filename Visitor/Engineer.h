#pragma once
#include "Staff.h"
class Engineer :
	public Staff
{
public:
	Engineer();
	Engineer(string n) :
		Staff(n)
	{

	}
	~Engineer();
	virtual void accept(Visitor* visitor);
	int codes()
	{
		return rand() % 10000;
	}
};

