#include "sort.h"

/**
 * swap - swaps two integers.
 * @a: integer one.
 * @b: integer two.
 * Return: nothing since void.
 */

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomutopartition - partitioning scheme.
 * @array: array to be sorted.
 * @size: size or length of the array.
 * @start: index to the start of the array.
 * @end: index to the end of the array.
 * Return: index to the pivot.
 */

int lomutopartition(int *array, size_t size, int start, int end)
{
	int j;
	int pivot = array[end];
	int i = start;

	for (j = start; j < end; ++j)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			++i;
		}
	}
	swap(&array[i], &array[end]);
	print_array(array, size);
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

void quicksortalgo(int *array, size_t size, int start, int end)
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
 * @size: length of the array.
 * Return: nothing since void.
 */

void quick_sort(int *array, size_t size)
{
	quicksortalgo(array, size, 0, size - 1);
}
