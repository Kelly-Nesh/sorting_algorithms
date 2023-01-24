#include "sort.h"

/**
 * bubble_sort - bubble sort implementation
 * @array: an array of integers
 * @size: size of the array
 *
 * Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, cnt, swap;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
			}
		}
	cnt--;
	}
}
