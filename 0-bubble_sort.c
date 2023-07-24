#include "sort.h"

/**
 * swap - swap 2 integers
 * @i: int to be swapped
 * @j: int to be swapped wit
 */
void swap(int *i, int *j)
{
	int temp = *j;

	*j = *i;
	*i = temp;
}

/**
 * bubble_sort - bubble sort alo
 * @array: array to sorting
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, x;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					for (x = 0; x < size; x++)
					{
					printf("%d", array[x]);
					if (x != size - 1)
					{
						putchar(',');
						putchar(' ');
					}
					}
					putchar('\n');
				}
			}
		}
	}
}
