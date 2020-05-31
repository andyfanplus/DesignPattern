#include"SingleObject.h"

#include<iostream>
using namespace std;
int main()
{
	SingleObject& ins1= SingleObject::New();
	SingleObject& ins2=  SingleObject::New();

	return 0;
}