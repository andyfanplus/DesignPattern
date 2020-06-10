#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	~Triangle();
	virtual void setcolor(Color *color);
	virtual void show();
};

