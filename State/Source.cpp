#include<iostream>

#include"Context.h"

#include"PlayState.h"
#include"StopState.h"
using namespace std;
int main()
{
	Context *context = new Context;
	PlayState *play = new PlayState;
	play->doAction(context);

	StopState *stop = new StopState;
	stop->doAction(context);

	return 0;
}