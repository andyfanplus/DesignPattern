#pragma once
#include "IOperation.h"
class subtract :
	public IOperation
{
public:
	subtract();
	~subtract();
	virtual int result();
};

