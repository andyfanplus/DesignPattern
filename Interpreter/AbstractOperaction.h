#pragma once
#include "Expression.h"
class AbstractOperaction :
	public Expression
{
public:
	AbstractOperaction();
	AbstractOperaction(Expression *l, Expression *r)
	{
		left = l; right = r;
	}
	~AbstractOperaction();
protected:
	Expression *left, *right;
};

