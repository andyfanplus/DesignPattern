#include "PlayState.h"
#include"Context.h"
#include<iostream>

PlayState::PlayState()
{
}


PlayState::~PlayState()
{
}


void PlayState::doAction(Context *context)
{
	std::cout << "play state" << std::endl;
	context->set(this);
}
