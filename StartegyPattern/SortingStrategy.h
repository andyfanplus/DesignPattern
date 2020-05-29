#pragma once
#include<vector>
using namespace std;
class SortingStrategy
{
public:
	SortingStrategy();
	~SortingStrategy();
	virtual void Sort(vector<int> &data) = 0;
};

