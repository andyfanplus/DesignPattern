#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:
	Triangle();
	~Triangle();
	void Draw() override;
};

