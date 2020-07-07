#include "TO.h"
#include"Manager.h"
#include"Engineer.h"

#include<iostream>
using namespace std;
CTO::CTO()
{
}


CTO::~CTO()
{
}

void CTO::visit(Engineer* engineer)
{
	cout << "engineer's codes:\t" << engineer->codes() << endl;
}

void CTO::visit(Manager* manager)
{
	cout << "manager's products:\t" << manager->products() << endl;
}