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

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                save = array[j];
                array[j] = array[j + 1];
                array[j + 1] = save;
                print_array(array, size);
            }
        }
    }
}

