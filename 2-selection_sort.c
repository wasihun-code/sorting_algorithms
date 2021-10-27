#include "sort.h"

/**
 * swap - swaps two integers.
 * @a: first integer.
 * @b: second integer.
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - implements sorting algorithm.
 * @array: array of integers.
 * @size: size of the array
 * Return: 0 since void.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min;

	if (size == 1)
		return;
	if (size == 2)
	{
		if (array[0] > array[1])
			swap(&array[0], &array[1]);
		print_array(array, size);
	}
	for (i = 0; i < size - 2; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
