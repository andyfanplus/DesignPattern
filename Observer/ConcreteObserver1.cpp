#include "ConcreteObserver1.h"

#include"Subject.h"
#include<iostream>
using namespace std;

ConcreteObserver1::ConcreteObserver1()
{
}

ConcreteObserver1::ConcreteObserver1(Subject *s)
	:Observer(s)
{
}

ConcreteObserver1::~ConcreteObserver1()
{
}


void ConcreteObserver1::update()
{
	cout << subject->get() << endl;
}
