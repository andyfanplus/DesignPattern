#pragma once
#include"SortingStrategy.h"
class BubbleSortingStategy:
	public SortingStrategy
{
public:
	BubbleSortingStategy();
	~BubbleSortingStategy();
	void Sort(vector<int> &data) override;
};

