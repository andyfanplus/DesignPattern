#pragma once
#include "Observer.h"
class Subject;
class ConcreteObserver1 :
	public Observer
{
public:
	ConcreteObserver1();
	ConcreteObserver1(Subject *);
	~ConcreteObserver1();
	virtual void update();
};

