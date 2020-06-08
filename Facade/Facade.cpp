#include "Facade.h"

#include"SubSystem1.h"
#include"SubSystem2.h"
#include"SubSystem3.h"

Facade::Facade()
	:sub1(new SubSystem1),
	sub2(new SubSystem2), 
	sub3(new SubSystem3)
{

}


Facade::~Facade()
{
}


void Facade::method()
{
	sub1->method();
	sub2->method();
	sub3->method();
}


void Facade::method1()
{
	sub2->method();
	sub1->method();
	sub3->method();
}
