#pragma once
#include "Staff.h"
class Manager :
	public Staff
{
public:
	Manager();
	Manager(string n):
		Staff(n)
	{
	}
	~Manager();
	virtual void accept(Visitor* visitor);
	int products()
	{
		return rand() % 10;
	}
};

