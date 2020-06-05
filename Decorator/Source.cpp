#include<iostream>

#include"Department.h"
#include"Furniture.h"
#include"Door.h"
using namespace std;

int main()
{
	Department *department = new Department;

	Door *door = new Door;
	door->setHouse(department);
	
	Furniture *furniture = new Furniture;
	furniture->setHouse(door);

	furniture->show();

	cout << endl;
	return 0;
}