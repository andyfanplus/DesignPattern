#include "Context.h"
#include"State.h"


Context::Context()
	:m_state(nullptr)
{
}


Context::~Context()
{
}


State* Context::state()
{
	return m_state;
}


void Context::set(State* state)
{
	m_state = state;
}
