#include<iostream>
#include"Black.h"
#include"Red.h"
#include"Triangle.h"
#include"Circle.h"
using namespace std;
int main()
{
	Triangle *triangle = new Triangle;
	triangle->setcolor(new Black);
	triangle->show();

	Circle *circle = new Circle;
	circle->setcolor(new Red);
	circle->show();
	return 0;
}