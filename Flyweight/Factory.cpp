#include "Factory.h"
#include"Flyweight.h"
#include"Shared.h"
#include<iostream>
using namespace std;
Factory::Factory()
{
}


Factory::~Factory()
{
}


Flyweight* Factory::get(string type)
{
	if (m.find(type)==m.end())
	{
		Flyweight *flyweight = new Shared();
		cout << "create\t";
		m.insert(map<string,Flyweight*>::value_type(type,flyweight));
	}
	else
	{
		cout << "existed\t" ;
	}
	return m[type];
}
