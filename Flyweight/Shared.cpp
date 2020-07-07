#include "Shared.h"

#include<iostream>
using namespace std;

Shared::Shared()
{
}
Shared::Shared(int u)
	:Flyweight(u)
{

}

Shared::~Shared()
{
}

void Shared::use()
{
	cout << "shared\t" << endl;
}