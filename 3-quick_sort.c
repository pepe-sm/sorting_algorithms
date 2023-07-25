#include "sort.h"

/**
 * split - Split for quick sort
 * @array: The array to sort with quicksort
 * @one: min
 * @end: max
 * @size: The size of the array
 * Return: The pivot
*/

int split(int *array, int one, int end, size_t size)
{
	int i, j = one, piv = array[end], tmp = 0;

	for (i = one; i < end; i++)
	{
		if (array[i] <= piv)
		{
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			if (j != i)
				print_array(array, size);
			j++;
		}
	}
	tmp = array[j];
	array[j] = array[i];
	array[i] = tmp;
	if (j != i)
		print_array(array, size);
	return (j);
}

/**
 * recursive_sort - recursion for quicksort
 * @array: the arrray
 * @one: min
 * @end: max
 * @size: array size
*/


void recursive_sort(int *array, int one, int end, size_t size)
{
	int piv;

	if (one < end)
	{
		piv = split(array, one, end, size);
		recursive_sort(array, one, piv - 1, size);
		recursive_sort(array, piv + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array with quicksort methods
 * @array: array to sorted
 * @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	if (!array || size <= 1)
		return;

	recursive_sort(array, 0, size - 1, size);
}
