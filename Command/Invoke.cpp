#include "Invoke.h"
#include"Command.h"


Invoke::Invoke()
{
}
Invoke::Invoke(Command *c)
	:command(c)
{
}

Invoke::~Invoke()
{
}


void Invoke::execute()
{
	command->execute();
}
