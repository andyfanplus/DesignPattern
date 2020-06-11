#pragma once
class Mediator;
class Colleague
{
public:
	Colleague();
	~Colleague();
	virtual void send(int message) = 0;
	void set(Mediator* mediator);
protected:
	Mediator *mediator;
public:
	virtual void received(int message) = 0;
};

