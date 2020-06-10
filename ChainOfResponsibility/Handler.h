#pragma once
class Handler
{
public:
	Handler();
	~Handler();
	virtual void setsuccessor(Handler* handler) = 0;
	virtual void handle(int type) = 0;
protected:
	Handler *handler;
};

