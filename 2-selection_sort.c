#include <stdio.h>
#include "sort.h"
/*
 * selection_sort - the function
 * @array: the array to be sorted
 * @size: the size of array
 * Description: sort using selection algo
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t current_min, x, sub_x;
	int swap;

	for (x = 0; x < size; x++)
	{
		current_min = x;
		for (sub_x = x + 1; sub_x < size; sub_x++)
		{
			if (array[sub_x] < array[current_min])
			{
				current_min = sub_x;
			}
		}
		swap = array[x];
		print_array(array, size);
		array[x] = array[current_min];
		array[current_min] = swap;
	}
}
