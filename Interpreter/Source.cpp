#include<iostream>

#include"Calculator.h"
using namespace std;
int main()
{
	map<string, int> m;
	m.insert(map<string, int>::value_type("10", 10));
	m.insert(map<string, int>::value_type("20", 20));
	m.insert(map<string, int>::value_type("5", 5));

	vector<string> exp;
	exp.push_back("10");
	exp.push_back("+");
	exp.push_back("20");
	exp.push_back("-");
	exp.push_back("5");

	Calculator *calculator = new Calculator(exp);
	cout << calculator->calculate(m) << endl;
	
	return 0;
}