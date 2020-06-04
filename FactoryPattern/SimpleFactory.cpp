#include "SimpleFactory.h"

#include"Shape.h"
#include"Circle.h"
#include"Triangle.h"
#include"Rectangle.h"

SimpleFactory::SimpleFactory()
{
}


SimpleFactory::~SimpleFactory()
{
}
Shape * SimpleFactory::create(int type)
{
	Shape *shape = nullptr;
	switch (type)
	{
	case 0:
		shape = new Triangle;
		break;
	case 1:
		shape = new Circle;
		break;
	case 2:
		shape = new Rectangle;
		break;
	default:
		break;
	}
	return shape;
}