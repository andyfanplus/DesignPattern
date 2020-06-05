#include "Door.h"

#include<iostream>
using namespace std;

Door::Door()
{
}


Door::~Door()
{
}


void Door::show()
{
	house->show();
	cout << "add door ";
}

