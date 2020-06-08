#pragma once
#include "Product.h"
class ConcreteProduct :
	public Product
{
public:
	ConcreteProduct();
	~ConcreteProduct();
	virtual void step1();
	virtual void step2();
	virtual void step3();
};

