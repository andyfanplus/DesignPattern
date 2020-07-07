#include "EO.h"


#include"Engineer.h"
#include"Manager.h"
#include<iostream>
using namespace std;
CEO::CEO()
{
}


CEO::~CEO()
{
}

void CEO::visit(Engineer* engineer)
{
	cout << "engineer's kpi:\t" << engineer->kpi() << endl;
}

void CEO::visit(Manager* manager)
{
	cout << "manager's kpi:\t" << manager->kpi() << endl;
}