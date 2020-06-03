#include<iostream>
#include"AbstractFactory.h"
using namespace std;
int main()
{
	//for example , i want to draw a red circle;
	AbstractFactory *af = new AbstractFactory;
	af->getShape(0)->draw();
	af->getColor(0)->fill();
	return 0;
}