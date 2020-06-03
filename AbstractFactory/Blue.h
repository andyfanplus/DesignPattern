#pragma once
#include"IColor.h"
class Blue:
	public IColor
{
public:
	Blue();
	~Blue();
	virtual void fill() override;
};

