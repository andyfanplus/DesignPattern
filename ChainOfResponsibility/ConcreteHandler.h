#pragma once
#include "Handler.h"
class ConcreteHandler :
	public Handler
{
public:
	ConcreteHandler();
	~ConcreteHandler();
	virtual void setsuccessor(Handler* handler);
	virtual void handle(int type);
};

