#include<iostream>	
#include<vector>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"
#include"SimpleFactory.h"
using namespace std;

int main()
{

	SimpleFactory *simplefactory = new SimpleFactory;
	Shape* shape= simplefactory->create(0);
	//Shape* shape = simplefactory->create(1);
	//Shape* shape = simplefactory->create(2);
	shape->Draw();
	
	return 0;
}