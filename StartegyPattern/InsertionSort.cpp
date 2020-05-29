#include "InsertionSort.h"



InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}


void InsertionSort::Sort(vector<int> &data)
{
	size_t n = data.size();
	int i, j;
	for (i = 1; i < n; i++)
	{
		int temp = data[i];
		j = i - 1;
		while (j >= 0 && temp < data[j])
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j+1]= temp;
	}

}
