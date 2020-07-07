#pragma once
#include<string>	
class Visitor;
using namespace std;
class Staff
{
public:
	Staff();
	Staff(string n)
	{
		name = n;
	}
	~Staff();
	virtual void accept(Visitor* visitor)=0;
	int kpi();
protected:
	string name;

};

