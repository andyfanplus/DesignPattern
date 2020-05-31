#include "SingleObject.h"

#include<iostream>
using namespace std;


SingleObject::SingleObject()
{
	cout << "single object constructed" << endl;
}


SingleObject::~SingleObject()
{
	cout << "single object destructed" << endl;
}


SingleObject& SingleObject::New()
{
	static SingleObject singleObject;
	return singleObject;
}
