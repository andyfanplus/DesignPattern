#pragma once
#include "AbstractOperaction.h"
class SubExpression :
	public AbstractOperaction
{
public:
	SubExpression();
	SubExpression(Expression *l, Expression *r)
	{
		left = l;
		right = r;
	}
	virtual int interpreter(map<string, int> var)
	{
		return left->interpreter(var) - right->interpreter(var);
	}
	~SubExpression();
};

