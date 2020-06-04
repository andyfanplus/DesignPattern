#pragma once
#include "State.h"
class StopState :
	public State
{
public:
	StopState();
	~StopState();
	virtual void doAction(Context* context);
};

