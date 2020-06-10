#include "Circle.h"

#include"Color.h"
#include<iostream>
using namespace std;

Circle::Circle()
{
}


Circle::~Circle()
{
}


void Circle::show()
{
	color->draw();
	cout << "circle" << endl;
}
void Circle::setcolor(Color *color)
{
	this->color = color;
}