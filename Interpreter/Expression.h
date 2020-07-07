#pragma once
#include<map>
using namespace std;
class Expression
{
public:
	Expression();
	~Expression();
	virtual int interpreter(map<string,int> var) = 0;
};

