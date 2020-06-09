#pragma once
class Prototype
{
public:
	Prototype();
	~Prototype();
	virtual Prototype* clone() = 0;
	int* get();
protected:
	int *data;
};

