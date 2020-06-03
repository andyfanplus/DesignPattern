#pragma once
#include "IShape.h"
class Circle :
	public IShape
{
public:
	Circle();
	~Circle();
	virtual void draw();
};

