#pragma once
class Color;
class Shape
{
public:
	Shape();
	~Shape();
	virtual void setcolor(Color *color)=0;
	virtual void show() = 0;
protected:
	Color *color;
};

