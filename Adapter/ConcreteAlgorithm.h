#pragma once
#include "Algorithm.h"
class ConcreteAlgorithm :
	public Algorithm
{
public:
	ConcreteAlgorithm();
	~ConcreteAlgorithm();
	virtual void method();
};

