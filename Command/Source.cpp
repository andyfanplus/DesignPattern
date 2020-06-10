#include<iostream>
#include"Invoke.h"
#include"Receiver.h"
#include"ConcreteCommand.h"
using namespace std;
int main()
{
	ConcreteCommand *c = new ConcreteCommand(new Receiver);
	Invoke *invoke = new Invoke(c);

	invoke->execute();	
	return 0;
}