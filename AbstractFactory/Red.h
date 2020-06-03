#pragma once
#include"IColor.h"
class Red:
	public IColor
{
public:
	Red();
	~Red();
	virtual void fill() override;
};

