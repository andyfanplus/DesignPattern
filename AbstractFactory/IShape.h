#pragma once
class IShape
{
public:
	IShape();
	~IShape();
	virtual void draw() = 0;
};

