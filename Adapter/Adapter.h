#pragma once
class Algorithm;
class Adapter
{
public:
	Adapter();
	void set(int type);
	~Adapter();
	void method();
private:
	Algorithm *algorithm;
};

