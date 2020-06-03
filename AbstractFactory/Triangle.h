#pragma once
#include "IShape.h"
class Triangle :
	public IShape
{
public:
	Triangle();
	~Triangle();
	virtual void draw();
};

