#include "sort.h"

/**
 * bubble_sort - implements bubble sort algorithm
 * @array: array of integers.
 * @size: size of array.
 * Return: 0 since void.
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
				print_array(array, size);
			}
		}
	}
}
