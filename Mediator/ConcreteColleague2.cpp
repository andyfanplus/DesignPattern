#include "ConcreteColleague2.h"

#include"Mediator.h"
#include<iostream>
using namespace std;
ConcreteColleague2::ConcreteColleague2()
{
}


ConcreteColleague2::~ConcreteColleague2()
{
}


void ConcreteColleague2::send(int message)
{
	mediator->send(message, this);
}


void ConcreteColleague2::received(int message)
{
	cout << "concrete colleague2 received: " << message << endl;
}
