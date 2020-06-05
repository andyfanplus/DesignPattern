#pragma once
class Subject;
class Observer
{
public:
	Observer();
	Observer(Subject *s);
	~Observer();
//	void add();
//	void remove();
	virtual void update() = 0;
protected:
	Subject *subject;
};

