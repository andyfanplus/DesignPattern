#include "Businss.h"

#include"Manager.h"
#include"Engineer.h"
#include"Visitor.h"
Businss::Businss()
{
	list.push_back(new Manager("andy1"));
	list.push_back(new Engineer("red1"));
	list.push_back(new Manager("andy2"));
	list.push_back(new Engineer("red2"));
	list.push_back(new Manager("andy3"));
	list.push_back(new Engineer("red3"));
}


Businss::~Businss()
{
}


void Businss::show(Visitor *visitor)
{
	for each (Staff* staff in list)
	{
		staff->accept(visitor);
	}
}
