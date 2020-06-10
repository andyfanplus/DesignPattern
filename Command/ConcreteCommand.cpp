#include "ConcreteCommand.h"

#include"Receiver.h"

#include<iostream>
using namespace std;
ConcreteCommand::ConcreteCommand()
{
}
ConcreteCommand::ConcreteCommand(Receiver *r)
	:Command(r)
{
}

ConcreteCommand::~ConcreteCommand()
{
}


void ConcreteCommand::execute()
{
	cout << "concrete command" << endl;
	receiver->execute();
}
