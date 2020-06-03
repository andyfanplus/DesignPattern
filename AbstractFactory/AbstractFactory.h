#pragma once
#include"IColor.h"
#include"IShape.h"
class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();
	IColor* getColor(int type);
	IShape* getShape(int type);
};

