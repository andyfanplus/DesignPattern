#include "ConcreteObserver.h"

#include"Subject.h"
#include<iostream>
using namespace std;

ConcreteObserver::ConcreteObserver()
{
}
ConcreteObserver::ConcreteObserver(Subject *s)
	:Observer(s)
{
}

ConcreteObserver::~ConcreteObserver()
{
}


void ConcreteObserver::update()
{
	cout << subject->get() << endl;
}
