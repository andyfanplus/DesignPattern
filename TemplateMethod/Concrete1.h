#pragma once
#include "Template.h"
class Concrete1 :
	public Template
{
public:
	Concrete1();
	~Concrete1();
protected:
	virtual void step1();
	virtual void step2();
};

