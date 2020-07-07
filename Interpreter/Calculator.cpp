#include "Calculator.h"
#include"SubExpression.h"
#include"AddExpression.h"
#include"VarExpression.h"
#include<stack>

Calculator::Calculator()
{
}

Calculator::Calculator(vector<string> exp)
{
	int n = exp.size();
	stack<Expression *> s;
	Expression *l = nullptr;
	Expression *r = nullptr;
	for (size_t i = 0; i < n; i++)
	{
		if (exp[i] == "+")
		{
			l = s.top(); s.pop();
			r = new VarExpression(exp[++i]);
			AddExpression *add = new AddExpression(l, r);
			s.push(add);
			continue;
		}
		else if (exp[i]=="-")
		{
			l = s.top(); s.pop();
			r = new VarExpression(exp[++i]);
			SubExpression *add = new SubExpression(l, r);
			s.push(add);
			continue;
		}
		else
		{
			l = new VarExpression(exp[i]);
			s.push(l);
		}
	}
	express = s.top(); s.pop();
}

int Calculator::calculate(map<string,int> var)
{
return 	express->interpreter(var);
}

Calculator::~Calculator()
{
}
