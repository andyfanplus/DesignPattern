#pragma once
#include "Visitor.h"
class CEO :
	public Visitor
{
public:
	CEO();
	~CEO();
	virtual void visit(Engineer* engineer);
	virtual void visit(Manager* manager);
};

