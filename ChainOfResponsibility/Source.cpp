#include<iostream>
#include"ConcreteHandler.h"
#include"ConcreteHandler1.h"

using namespace std;
int main()
{
	ConcreteHandler* handle1 = new ConcreteHandler;
	ConcreteHandler1* handle2 = new ConcreteHandler1;

	handle1->setsuccessor(handle2);
	handle1->handle(10);

	handle1->handle(150);

	handle1->handle(250);


	return 0;
}