#include "BubbleSortingStategy.h"



BubbleSortingStategy::BubbleSortingStategy()
{
}


BubbleSortingStategy::~BubbleSortingStategy()
{
}


void BubbleSortingStategy::Sort(vector<int> &data)
{
	size_t n = data.size();
	bool flag = true;
	for (size_t i = 0; i < n-1; i++)
	{
		flag = true;
		for (size_t j = i+1; j < n; j++)
		{
			if (data[j] < data[i])
			{
				flag = false;
				data[j] = data[j] ^data[i];
				data[i]= data[j] ^ data[i];
				data[j] = data[j] ^ data[i];
			}
		}
		if(flag)
		{
			break;
		}
	}
}
