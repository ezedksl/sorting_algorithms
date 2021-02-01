#include "sort.h"

/**
 * quick_sort - Applies the Quicksort algorithm to an array.
 * @array: Array to be sorted.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if ((!array) || (size <= 1))
		return;
	sorting(array, 0, size - 1, size);
}

/**
 * partition - Does the partitioning of the array (Lomuto).
 * @array: Array to be sorted.
 * @low: Rightmost index.
 * @high: Leftmost index.
 * @size: Size of the array.
 * Return: Real position of the pivot.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int a = 0, b = 0, temp = 0;

	a = low;
	for (b = low; b < high; b++)
	{
		/**
		 * printf("a:%d - b:%d - piv:%d -
		 * A:%d - B:%d\n", a, b, pivot, array[a], array[b]);
		 */
		if (array[b] < pivot)
		{
			temp = array[a];
			array[a] = array[b];
			array[b] = temp;
			if (array[b] != array[a])
				print_array(array, size);
			a++;
		}
	}
	temp = array[a];
	array[a] = array[high];
	array[high] = temp;
	if (array[a] != array[high])
		print_array(array, size);
	return (a);
}

/**
 * sorting - Real sort (uses low and high to be able to partition)
 * @array: Array to be sorted.
 * @low: Rightmost index.
 * @high: Leftmost index.
 * @size: Size of the array.
 */
void sorting(int *array, int low, int high, size_t size)
{
	int p = 0;

	if (low < high)
	{
		p = partition(array, low, high, size);
		sorting(array, low, p - 1, size);
		sorting(array, p + 1, high, size);
	}
}
