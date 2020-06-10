#pragma once
class Receiver;
class Command
{
public:
	Command();
	Command(Receiver *r);
	~Command();
	virtual void execute() = 0;
protected:
	Receiver *receiver;
};

