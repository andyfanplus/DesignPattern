#include<iostream>

#include"ConcreteObserver.h"
#include"ConcreteObserver1.h"
#include"Subject.h"
using namespace std;

int main()
{
	
	Subject *subject = new Subject;

	ConcreteObserver *co1 = new ConcreteObserver(subject);
	ConcreteObserver1 *co2 = new ConcreteObserver1(subject);

	subject->add(co1);
	subject->add(co2);

	subject->change(1);

	subject->remove(co1);

	subject->change(2);
	return 0;
}