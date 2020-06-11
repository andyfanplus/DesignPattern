#pragma once
#include "Colleague.h"
class ConcreteColleague2 :
	public Colleague
{
public:
	ConcreteColleague2();
	~ConcreteColleague2();
	virtual void send(int message);
	virtual void received(int message);
};

