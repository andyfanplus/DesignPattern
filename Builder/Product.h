#pragma once
class Product
{
public:
	Product();
	~Product();
	virtual void step1() = 0;
	virtual void step2() = 0;
	virtual void step3() = 0;
};

