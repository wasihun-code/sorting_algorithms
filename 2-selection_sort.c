#include "sort.h"

/**
 * selection_sort - implements sorting algorithm.
 * @array: array of integers.
 * @size: size of the array
 * Return: 0 since void.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min;

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
