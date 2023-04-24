#include "sort.h"
#include <stdio.h>
/*
 * bubble_sort - the function
 * @array: pointer to array of integers
 * @size: size of the array
 * Description: the function for sorting using bubble sort
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, last_el;
	int el, swapped;

	last_el = size;
	while (last_el > 0)
	{
		swapped = 0;
		for (i = 0; i < last_el; i++)
		{
			if (array[i] > array[i + 1])
			{
				el = *(array + i);
				*(array + i) = array[i + 1];
				*(array + i + 1) = el;

				swapped = 1;
			}
		}
		if (swapped)
		{
			print_array(array, size);
		}

		last_el -= 1;
	}
}
