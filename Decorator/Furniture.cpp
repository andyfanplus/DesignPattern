#include "Furniture.h"

#include<iostream>
using namespace std;

Furniture::Furniture()
{
}


Furniture::~Furniture()
{
}


void Furniture::show()
{
	house->show();
	cout << "add furniture ";
}


