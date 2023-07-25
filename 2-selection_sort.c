#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: array to sort
 * @size: array size
 *
*/

void selection_sort(int *array, size_t size)
{

	size_t i = 0, j = 0, k = 0;
	int aux = 0, tmp = 0;

	if (!array || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		aux = array[i];
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < aux)
			{
				aux = array[j];
				k = j;
			}
		}
		if (k != i)
		{
			tmp = array[i];
			array[i] = aux;
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
