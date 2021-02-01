#include "sort.h"

/**
 * selection_sort - Sorts an array in ascending order (Selection Sort)
 * @array: Array to be sorted
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int smaller, point = 0;

	if ((!array) || size <= 0)
		return;
	for (a = 0; a < size - 1; a++)
	{
		smaller = array[a];
		for (b = a + 1; b < size; b++)
		{
			if (smaller > array[b])
			{
				smaller = array[b];
				point = b;
			}
		}
		if (smaller != array[a])
		{
			array[point] = array[a];
			array[a] = smaller;
			print_array(array, size);
		}
	}
}
