#include "ConcreteColleague1.h"


#include"Mediator.h"
#include<iostream>
using namespace std;
ConcreteColleague1::ConcreteColleague1()
{
}


ConcreteColleague1::~ConcreteColleague1()
{
}


void ConcreteColleague1::send(int messsage)
{
	mediator->send(messsage, this);
}


void ConcreteColleague1::received(int message)
{
	cout << "concrete colleague1 received: " << message << endl;
}
