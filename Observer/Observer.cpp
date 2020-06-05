#include "Observer.h"

#include"Subject.h"

Observer::Observer()
	:subject(nullptr)
{
}

Observer::Observer(Subject *s)
	:subject(s)
{
}

Observer::~Observer()
{
}


//void Observer::add()
//{
//}


//void Observer::remove()
//{
//}
