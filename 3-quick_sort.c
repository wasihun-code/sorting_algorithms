#include "sort.h"

/**
 * swap - makes it easy and readable to swap integers.
 * @i: pointer to integer to swap.
 * @j: pointer to integer to swap.
 * Return: 0 since void.
 */

void swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * lomutopartition - partitioning scheme.
 * @array: array to be sorted.
 * @size: size or length of the array.
 * @start: index to the start of the array.
 * @end: index to the end of the array.
 * Return: index to the pivot.
 */

int lomutopartition(int *array, int size, int start, int end)
{
	int j, pivot = array[end], i = start;

	for (j = start; j < end; ++j)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			++i;
		}
	}
	print_array(array, size);
	swap(&array[i], &array[end]);

	return (i);
}

/**
 * quicksortalgo - implementation of the quicksort algorithm in c
 * @array: array to be sorted.
 * @size: size of the array or length of the array.
 * @start: index to the start of the array.
 * @end: index to end of array or size - 1.
 * Return: nothing since void.
 */

void quicksortalgo(int *array, int size, int start, int end)
{
	if (start >= end)
		return;

	int i = lomutopartition(array, size, start, end);
	quicksortalgo(array, size, start, i - 1);
	quicksortalgo(array, size, i + 1, end);
}

/**
 * quick_sort - implementation of quicksort.
 * @array: array to be sorted.
 * @size: lengtj of the array.
 * Return: nothing since void.
 */

void quick_sort(int *array, size_t size)
{
	quicksortalgo(array, size, 0, size - 1);
}
