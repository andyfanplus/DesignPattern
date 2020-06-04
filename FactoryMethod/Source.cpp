#include<iostream>

#include"AddFactory.h"
#include"SubFactory.h"
#include"IFactory.h"
#include"IOperation.h"
using namespace std;
int main()
{
	IFactory *if1 = new AddFactory;
	IOperation *add = if1->create();
	add->a = 10;
	add->b = 10;
	cout << add->result() << endl;

	IFactory *if2 = new SubFactory;
	IOperation *sub = if2->create();
	sub->a = 100;
	sub->b = 10;
	cout << sub->result() << endl;
	return 0;
}