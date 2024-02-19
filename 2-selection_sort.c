#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 *                  order using selection sort algorithm
 * @array: array of integers
 * @size: array's size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
