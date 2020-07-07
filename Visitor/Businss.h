#pragma once
#include<vector>
class Staff;
class Visitor;
using namespace std;
class Businss
{
public:
	Businss();
	~Businss();
	void show(Visitor *visitor);
private:
	vector < Staff* > list;
};

