#pragma once
#include "Template.h"
class Concrete2 :
	public Template
{
public:
	Concrete2();
	~Concrete2();
protected:
	virtual void step1();
	virtual void step2();
};

