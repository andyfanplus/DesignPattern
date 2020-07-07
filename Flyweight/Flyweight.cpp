#include "Flyweight.h"

#include<iostream>
using namespace std;


Flyweight::Flyweight()
{
	unshared = 0;
}

Flyweight::Flyweight(int u)
{
	unshared = u;
}


Flyweight::~Flyweight()
{
}


