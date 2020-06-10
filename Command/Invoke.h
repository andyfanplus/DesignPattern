#pragma once
class Command;
class Invoke
{
public:
	Invoke();
	Invoke(Command *c);
	~Invoke();
	void execute();
protected:
	Command *command;
};

