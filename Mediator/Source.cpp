#include<iostream>

#include"ConcreteMediator.h"
#include"ConcreteColleague1.h"
#include"ConcreteColleague2.h"
using namespace std;
int main()
{
	ConcreteMediator *mediator = new ConcreteMediator;
	ConcreteColleague1 *colleague1 = new ConcreteColleague1;
	ConcreteColleague2 *colleague2 = new ConcreteColleague2;

	colleague1->set(mediator);
	colleague2->set(mediator);

	mediator->setcolleague1(colleague1);
	mediator->setcolleague2(colleague2);

	colleague1->send(10);
	colleague2->send(100);
	return 0;
}