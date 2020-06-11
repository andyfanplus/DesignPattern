#pragma once
#include"Colleague.h"
class ConcreteColleague1
	:public Colleague
{
public:
	ConcreteColleague1();
	~ConcreteColleague1();
	virtual void send(int messsage);
	virtual void received(int message);
};

