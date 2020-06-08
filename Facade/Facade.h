#pragma once
class SubSystem1;
class SubSystem2;
class SubSystem3;
class Facade
{
public:
	Facade();
	~Facade();
private:
	SubSystem1 *sub1;
	SubSystem2 *sub2;
	SubSystem3 *sub3;
public:
	void method();
	void method1();
};

