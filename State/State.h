#pragma once
class Context;
class State
{
public:
	State();
	~State();
//	void doAction(Context* context);
	virtual void doAction(Context* context) = 0;
};

