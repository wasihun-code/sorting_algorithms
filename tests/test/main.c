#include <stdio.h>
#include <stdlib.h>


int partition(int l, int h)
{
	int array[] = [6, 5, 8, 9, 3, 10, 15, 12, 16];
	int pivot = array[l];
	int i = l;
	int temp, tmp;
	int j = h;

	while (i < j)
	{
		do
		{
			i++;
		} while(array[i] <= pivot);
		do
		{
			j--;
		} while(array[j] > pivot);
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		tmp = array[l];
		array[l] = array[j];
		array[j] = tmp;
		return j;
	}
}

int quicksort(int l, int h)
{
	if (l < h)
	{
		int j = partition(l, h);
		quicksort(l, j);
		quicksort(j, h);
	}
}
