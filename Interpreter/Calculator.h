#pragma once
#include<string>
#include<vector>
#include<map>
using namespace std;
class Expression;
class Calculator
{
public:
	Calculator();
	Calculator(vector<string> exp);
	int calculate(map<string,int>);
	~Calculator();
private :
	Expression *express;
};

