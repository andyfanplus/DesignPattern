#pragma once
class Template
{
public:
	Template();
	~Template();
	void method();
//	void step1();
protected:
	virtual void step1() = 0;
	virtual void step2() = 0;
};

