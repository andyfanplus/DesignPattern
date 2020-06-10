#pragma once
#include "Handler.h"
class ConcreteHandler1 :
	public Handler
{
public:
	ConcreteHandler1();
	~ConcreteHandler1();
	virtual void setsuccessor(Handler* handler);
	virtual void handle(int type);
};

