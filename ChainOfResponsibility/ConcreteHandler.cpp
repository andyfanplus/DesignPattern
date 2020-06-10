#include "ConcreteHandler.h"

#include<iostream>
using namespace std;

ConcreteHandler::ConcreteHandler()
{
}


ConcreteHandler::~ConcreteHandler()
{
}


void ConcreteHandler::setsuccessor(Handler* handler)
{
	this->handler = handler;
}


void ConcreteHandler::handle(int type)
{
	if (type < 100)
	{
		cout << "concrete handler" << endl;
	}
	else
	{
		if (this->handler)
		{
			handler->handle(type);
		}
	}
}
