#include "StopState.h"
#include"Context.h"
#include<iostream>


StopState::StopState()
{
}


StopState::~StopState()
{
}


void StopState::doAction(Context* context)
{
	std::cout << "stop state" << std::endl;
	context->set(this);
}
