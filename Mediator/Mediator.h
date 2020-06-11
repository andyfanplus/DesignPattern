#pragma once
class ConcreteColleague1;
class ConcreteColleague2;
class Colleague;
class Mediator
{
public:
	Mediator();
	~Mediator();
protected:
	Colleague *c1;
	Colleague *c2;
public:
	virtual void send(int message, Colleague* colleague) = 0;
	void setcolleague1(Colleague* colleague);
	void setcolleague2(Colleague* colleague);
};

