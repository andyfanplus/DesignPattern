#pragma once
class Component
{
public:
	Component();
	~Component();
	virtual void add(Component* c) = 0;
	virtual void remove(Component* c) = 0;
};

