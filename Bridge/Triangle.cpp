#include "Triangle.h"

#include"Color.h"
#include<iostream>
using namespace std;

Triangle::Triangle()
{
}


Triangle::~Triangle()
{
}


void Triangle::show()
{
	color->draw();
	cout << "triangle" << endl;
}

void Triangle::setcolor(Color *color)
{
	this->color = color;
}