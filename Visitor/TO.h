#pragma once
#include "Visitor.h"
class CTO :
	public Visitor
{
public:
	CTO();
	~CTO();
	virtual void visit(Engineer* engineer) ;
	virtual void visit(Manager* manager) ;
};

