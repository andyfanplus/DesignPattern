#pragma once
#include "SortingStrategy.h"
class InsertionSort :
	public SortingStrategy
{
public:
	InsertionSort();
	~InsertionSort();

	void Sort(vector<int> &data) override;
};

