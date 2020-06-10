#include<iostream>
#include"Concrete1.h"
#include"Concrete2.h"

using namespace std;
int main()
{
	Template *t = new Concrete1;
	t->method();

	t = new Concrete2;
	t->method();
	return 0;
}