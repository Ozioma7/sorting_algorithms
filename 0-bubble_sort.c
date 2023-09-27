#include "sort.h"

/**
 * swap_ints - Swaping two integers in an array.
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
 * bubble_sort - Sorting an array of integers in ascending order.
 * @array: An array of integers
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, lenght = size
	bool boolean = false;

	if (array == NULL || size = 1)
		return;

	while (boolean == false)
	{
		boolean = true;
		for (i = 0; i < lenght - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				boolean = false;
			}
		}
		lenght--;
	}
}
