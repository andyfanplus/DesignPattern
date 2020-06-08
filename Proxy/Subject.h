#pragma once
class Subject
{
public:
	Subject();
	~Subject();
	virtual void request() = 0;
};

