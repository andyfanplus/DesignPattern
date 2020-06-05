#pragma once
class Observer;
#include<vector>
using namespace std;
class Subject
{
public:
	Subject();
	~Subject();
	void add(Observer* o);
	void remove(Observer *o);
	void notify();
	void change(int s);
	int get() { return state; }
private:
	vector<Observer*> lists;
	int state;
};

