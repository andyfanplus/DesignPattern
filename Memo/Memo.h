#pragma once
#include<string>
using namespace std;

class Actor;
class Memo
{
public:
	Memo();
	Memo(Actor *actor);
	~Memo();
	string getname();
	int getage();
private:
	string name;
	int age;
};

