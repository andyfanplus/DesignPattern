#pragma once
class IColor
{
public:
	IColor();
	~IColor();
	virtual void fill() = 0;
};

