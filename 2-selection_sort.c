#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer
 * @b: The second integer
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Using selection sort algorithm to sort an array of
 * integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
				min = j;
		}
	}
	if (i != min)
	{
		swap_ints(array[i], min);
		print_array(array, size);
	}
}
