#pragma once
#include "IFactory.h"
class IOperation;
class SubFactory :
	public IFactory
{
public:
	SubFactory();
	~SubFactory();
	virtual IOperation* create();
};

