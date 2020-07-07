#include<iostream>
#include"Factory.h"
#include"Shared.h"
#include"UnShared.h"
using namespace std;
int main()
{
	Factory *factory = new Factory;
	Flyweight *f1 = factory->get("X");
	f1->use();
	Flyweight *f2 = factory->get("Y");
	f2->use();
	Flyweight *f3 = factory->get("X");
	f3->use();
	UnShared *us = new UnShared;
	us->use();
	return 0;
}