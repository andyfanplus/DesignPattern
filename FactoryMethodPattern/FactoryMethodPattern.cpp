#include<iostream>	
#include<vector>

#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
using namespace std;

int main()
{
	Shape *shape = new Circle();
	shape->Draw();
	shape = new Rectangle();
	shape->Draw();
	shape = new Triangle();
	shape->Draw();
	return 0;
}