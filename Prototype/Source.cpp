#include<iostream>

#include"Concrete1.h"
#include"Concrete2.h"
using namespace std;

int main()
{
	Prototype *c1 = new Concrete1;
	Prototype *clone = c1->clone();

	int* p1 = c1->get();
	int *p2 = clone->get();

	cout << (p1 == p2) << endl;

	return 0;
}