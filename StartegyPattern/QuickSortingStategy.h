#pragma once
#include"SortingStrategy.h"
#include<vector>
using namespace std;
class QuickSortingStategy :
	public SortingStrategy
{
public:
	QuickSortingStategy();
	~QuickSortingStategy();
	void Sort(vector<int> &data) override;
};

