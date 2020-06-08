#pragma once
#include "Subject.h"
class RealSubject;
class Proxy :
	public Subject
{
public:
	Proxy();
	~Proxy();
	virtual void request();

private:
	RealSubject *rs;
};

