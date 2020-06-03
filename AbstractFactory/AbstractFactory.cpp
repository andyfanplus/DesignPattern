#include "AbstractFactory.h"

#include"Red.h"
#include"Blue.h"
#include"Triangle.h"
#include"Circle.h"

AbstractFactory::AbstractFactory()
{
}


AbstractFactory::~AbstractFactory()
{
}


IColor* AbstractFactory::getColor(int type)
{
	IColor *ic = nullptr;
	switch (type)
	{
	case 0:
		ic = new Red;
		break;
	case 1:
		ic = new Blue;
		break;
	default:
		break;
	}
	return ic;
}


IShape* AbstractFactory::getShape(int type)
{
	IShape *is = nullptr;
	switch (type)
	{
	case 0:
		is = new Circle;
		break;
	case 1:
		is = new Triangle;
		break;
	default:
		break;
	}
	return is;
}
