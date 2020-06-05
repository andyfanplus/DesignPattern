#pragma once
#include "Observer.h"
class Subject;
class ConcreteObserver :
	public Observer
{
public:
	ConcreteObserver();
	ConcreteObserver(Subject *);
	~ConcreteObserver();
	virtual void update();
};

