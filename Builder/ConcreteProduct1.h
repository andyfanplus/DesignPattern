#pragma once
#include "Product.h"
class ConcreteProduct1 :
	public Product
{
public:
	ConcreteProduct1();
	~ConcreteProduct1();
	virtual void step1();
	virtual void step2();
	virtual void step3();
};

