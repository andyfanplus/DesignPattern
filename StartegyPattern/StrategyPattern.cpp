#include<iostream>	
#include<vector>

#include"BubbleSortingStategy.h"
#include"QuickSortingStategy.h"
#include"InsertionSort.h"
using namespace std;

int main()
{
	vector<int> v;
	int data[11] = { 1,5,2,2,8,7,9,8,9,6,0 };
	v.assign(data, data + 11);

	SortingStrategy *strategy = new BubbleSortingStategy();
	strategy->Sort(v);

	v.assign(data, data + 11);
	strategy = new QuickSortingStategy();
	strategy->Sort(v);

	strategy = new InsertionSort();
	strategy->Sort(v);
	return 0;
}