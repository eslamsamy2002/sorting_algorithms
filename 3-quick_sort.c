#include "sort.h"
#include <stdio.h>

/**
 *swap - Swaps the values of two integers using pointers.
 *@array: ...
 *@size: ....
 *@x: Pointer to the first integer.
 *@y: Pointer to the second integer.
 */
void swap(int *array, size_t size, int *x, int *y)
{
	if (*x != *y)
	{
		*x = *x + *y;
		*y = *x - *y;
		*x = *x - *y;
		print_array((const int *) array, size);
	}
}

/**
 *lomutoPartition - every int in the left is lower than the pivot
 *@array:pointer of integer
 *@start: start index of array part
 *@end: end index of array part
 *@size:size of array
 *Return: pivot index
 */
size_t lomutoPartition(int *array, size_t size, ssize_t start, ssize_t end)
{
	int i, j, pivot = array[end];

	for (i = j = start; i < end; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[end]);

	return (i);
}

void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	if (lo < hi)
	{
		size_t p = lomutoPartition(array, size, lo, hi);

		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
