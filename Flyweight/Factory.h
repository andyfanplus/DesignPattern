#pragma once
#include<string>
#include<map>
using namespace std;
class Flyweight;

class Factory
{
public:
	Factory();
	~Factory();
	Flyweight* get(string type);
private:
	map<string, Flyweight*> m;
};

