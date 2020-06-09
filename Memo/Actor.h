#pragma once
#include<string>
using namespace std;
class Memo;

class Actor
{
public:
	Actor();
	~Actor();
	void setname(string name);
	string getname() { return name; }

	void setage(int age);
	int getage() { return age; }

	void setmemo(Memo* memo);
private:
	string name;
	int age;
};

