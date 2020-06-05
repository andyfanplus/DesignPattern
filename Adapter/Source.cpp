#include<iostream>

#include"Adapter.h"
using namespace std;

int main()
{
	Adapter *adapter = new Adapter;
	adapter->set(0);
	adapter->method();

	adapter->set(1);
	adapter->method();
	return 0;
}