#include "sort.h"

/**
 * swap - swap values
 * @a: value a
 * @b: value b
 */
void swap(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
}
