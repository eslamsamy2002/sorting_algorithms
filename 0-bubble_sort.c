#include "sort.h"

/**
 *bubble_sort - ..
 *
 *@array: ..
 *@size: ...
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (size < 2 || size == NULL || array == NULL)
		return;
	i = 0;

	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
