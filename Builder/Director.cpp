#include "Director.h"
#include"Product.h"


Director::Director()
	:product(nullptr)
{
}


Director::~Director()
{
}


void Director::create(Product *p)
{
	p->step1();
	p->step2();
	p->step3();
}
