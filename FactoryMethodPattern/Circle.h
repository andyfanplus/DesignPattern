#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle();
	~Circle();
	void Draw() override;
};

