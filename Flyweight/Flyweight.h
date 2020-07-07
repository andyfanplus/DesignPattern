#pragma once
class Flyweight
{
public:
	Flyweight();
	Flyweight(int u);
	~Flyweight();
	virtual void use()=0;
protected:
	int shared;
	int unshared;
};

