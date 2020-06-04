#pragma once
#include "IFactory.h"
class IOperation;
class AddFactory :
	public IFactory
{
public:
	AddFactory();
	~AddFactory();
	virtual IOperation* create();
};

