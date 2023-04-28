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
	int sorted_index, minimum_index, i;
	int swap_value, swapped;

	if (array == NULL || size < 2)
		return;

	sorted_index = -1;

	while (sorted_index <= (int) (size - 1))
	{
		/* set the initial minimum index*/
		minimum_index = sorted_index + 1;
		swapped = 0;

		for (i = sorted_index + 1; i < (int) size; i++)
		{
			/* if the iterated value is less than the value at the min index */
			if (array[i] < array[minimum_index])
			{
				minimum_index = i;
				swapped = 1;
			}
		}
		swap_value = array[sorted_index + 1];
		array[sorted_index + 1] = array[minimum_index];
		array[minimum_index] = swap_value;
		if (swapped)
			print_array(array, size);

		sorted_index++;
	}
}
