#include<iostream>

#include"Proxy.h"
using namespace std;
int main()
{
	Proxy *proxy = new Proxy;
	proxy->request();
	return 0;
}