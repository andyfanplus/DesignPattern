#include "UnShared.h"

#include<iostream>
using namespace std;

UnShared::UnShared()
{
}
UnShared::UnShared(int u)
	:Flyweight(u)
{

}

UnShared::~UnShared()
{
}
void UnShared::use()
{
	cout << "unshared" << endl;
}