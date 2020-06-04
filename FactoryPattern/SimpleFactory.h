#pragma once
class Shape;
class SimpleFactory
{
public:
	SimpleFactory();
	~SimpleFactory();
	Shape *create(int type);
};

