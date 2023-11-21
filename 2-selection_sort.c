#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array for sorting.
 * @size: The size of the array.
 * Return: nothing.
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0, imin = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		imin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
				imin = j;
		}
		if (imin != i)
		{
			temp = array[i];
			array[i] = array[imin];
			array[imin] = temp;
			print_array(array, size);
		}
	}
}
