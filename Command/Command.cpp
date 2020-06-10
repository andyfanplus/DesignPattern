#include "Command.h"

#include"Receiver.h"

Command::Command()
{
}
Command::Command(Receiver *r)
	:receiver(r)
{

}

Command::~Command()
{
}
