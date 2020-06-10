#include "ConcreteHandler1.h"


#include<iostream>
using namespace std;

ConcreteHandler1::ConcreteHandler1()
{
}


ConcreteHandler1::~ConcreteHandler1()
{
}


void ConcreteHandler1::setsuccessor(Handler* handler)
{
	this->handler = handler;
}


void ConcreteHandler1::handle(int type)
{
	if (type < 200)
	{
		cout << "concrete handler1" << endl;
	}
	else
	{
		if (this->handler)
		{
			handler->handle(type);
		}
	}
}
