#pragma once
class IOperation;
class IFactory
{
public:
	IFactory();
	~IFactory();
	virtual IOperation * create() = 0;
};

