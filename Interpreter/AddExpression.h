#pragma once
#include "AbstractOperaction.h"
class AddExpression :
	public AbstractOperaction
{
public:
	AddExpression();
	AddExpression(Expression *l, Expression *r) {
		left = l; right = r;
	}
	virtual int interpreter(map<string, int> var)
	{
		return left->interpreter(var) + right->interpreter(var);
	}
	~AddExpression();
};

