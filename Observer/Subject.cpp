#include "Subject.h"

#include"Observer.h"	

Subject::Subject()
{
}


Subject::~Subject()
{
}


void Subject::add(Observer* o)
{
	lists.push_back(o);
}


void Subject::remove(Observer *o)
{
	for (auto it = lists.begin(); it != lists.end(); ++it)
	{
		if (*it == o)
		{
			it = lists.erase(it);
		}
		if (it == lists.end())
		{
			break;
		}
	}

}


void Subject::notify()
{
	for each (Observer *o in lists)
	{
		o->update();
	}
}


void Subject::change(int s)
{
	state = s;
	notify();
}
