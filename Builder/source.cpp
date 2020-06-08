#include<iostream>

#include"Director.h"
#include"ConcreteProduct.h"
#include"ConcreteProduct1.h"
using namespace std;
int main()
{
	Director *director = new Director;
	ConcreteProduct *cp1 = new ConcreteProduct;
	director->create(cp1);

	cout << endl;

	ConcreteProduct1 *cp2 = new ConcreteProduct1;
	director->create(cp2);
	return 0;
}