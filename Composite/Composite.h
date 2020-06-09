#pragma once
#include "Component.h"
#include<vector>
using namespace std;
class Composite :
	public Component
{
public:
	Composite();
	~Composite();
	virtual void add(Component* c);
	virtual void remove(Component* c);
private:
	vector<Component*> lists;
};

