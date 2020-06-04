#pragma once
class State;
class Context
{
public:
	Context();
	~Context();
	State* state();
private:
	State* m_state;
public:
	void set(State* state);
};

