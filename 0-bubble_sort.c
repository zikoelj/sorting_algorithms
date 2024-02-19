#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	int save = 0;
	size_t i, j;

	if (size < 2 || array == NULL)
		return;
	for (j = size; j > 0; j--)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i + 1] < array[i])
			{
				save = array[i];
				array[i] = array[i + 1];
				array[i + 1] = save;
				print_array(array, size);
			}
		}
	}
}
