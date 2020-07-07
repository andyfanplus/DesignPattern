#pragma once
class Engineer;
class Manager;
class Visitor
{
public:
	Visitor();
	~Visitor();
	virtual void visit(Engineer* engineer) = 0;
	virtual void visit(Manager* manager) = 0;
};

