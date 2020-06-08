#include<iostream>

#include"Facade.h"
using namespace std;
int main()
{
	Facade *facade = new Facade;
	facade->method();

	cout << endl;

	facade->method1();
	return 0;
}