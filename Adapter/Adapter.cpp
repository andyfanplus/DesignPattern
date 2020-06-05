#include "Adapter.h"

#include"ConcreteAlgorihm1.h"
#include"ConcreteAlgorithm.h"
#include<iostream>
using namespace std;

Adapter::Adapter()
	:algorithm(nullptr)
{
}


Adapter::~Adapter()
{
}

void Adapter::set(int type)
{
	switch (type)
	{
	case 0:
		algorithm = new ConcreteAlgorithm;
		break;
	case 1:
		algorithm = new ConcreteAlgorihm1;
		break;
	default:
		break;
	}
}

void Adapter::method()
{
	cout << "adapter" << endl;
	if (algorithm)
	{
		algorithm->method();
	}
}
