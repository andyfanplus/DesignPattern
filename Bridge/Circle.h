#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle();
	~Circle();
	virtual void show();
	virtual void setcolor(Color *color);
};

