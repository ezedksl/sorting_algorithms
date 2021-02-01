#include "sort.h"

/**
 *  bubble_sort - Sorts an array of integers using the Bubble Sort algorithm
 * @array: The array of int elements to sort
 * @size: The size of the array (n)
 */

void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y = 0, n = 0;
	int swap = 0;

	if (!(array) || size <= 0)
		return;
	n = size;
	/* (x < n is also valid), but loop will repeat one time more than needed. */
	for (x = 0; x < n - 1; x++)
	{
		/* As bigger element always ends in the final place, we skip x iterations */
		for (y = 0; y < n - 1 - x; y++)
		{
			/* If next number is smaller, swap behind */
			if (array[y] > array[y + 1])
			{
				swap = array[y];
				array[y] = array[y + 1];
				array[y + 1] = swap;
				print_array(array, n);
			}
		}
	}
}
