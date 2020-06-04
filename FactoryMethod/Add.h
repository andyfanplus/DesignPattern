#pragma once
#include "IOperation.h"
class Add :
	public IOperation
{
public:
	Add();
	~Add();
	virtual int result();
};

