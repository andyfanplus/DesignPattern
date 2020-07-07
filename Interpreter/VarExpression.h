#pragma once
#include "Expression.h"
#include<string>
using namespace std;
class VarExpression :
	public Expression
{
public:
	VarExpression();
	VarExpression(string k)
	{
		key = k;
	}
	~VarExpression();
	virtual int interpreter(map<string, int> var)
	{
		return var[key];
	}
private:
	string key;
};

