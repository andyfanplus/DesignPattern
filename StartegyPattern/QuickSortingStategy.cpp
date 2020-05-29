#include "QuickSortingStategy.h"

#include<algorithm>

QuickSortingStategy::QuickSortingStategy()
{
}


QuickSortingStategy::~QuickSortingStategy()
{
}


void QuickSortingStategy::Sort(vector<int> &data)
{
	sort(data.begin(), data.end());
}
