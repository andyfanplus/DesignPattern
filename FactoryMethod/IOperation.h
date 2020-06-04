#pragma once
class IOperation
{
public:
	IOperation();
	~IOperation();
	virtual int result() = 0;
	int a;
	int b;
};

