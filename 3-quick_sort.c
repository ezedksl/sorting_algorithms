#include "sort.h"

/**
 * quick_sort - Applies the Quicksort algorithm to an array.
 * Q
void quick_sort(int *array, size_t size)
{
    sorting(array, 0, size - 1, size);

}

int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int a = low, b = low;
    int temp;

    for (b = low; b < high; b++)
    {
        /* printf("a:%d - b:%d - piv:%d - A:%d - B:%d\n", a, b, pivot, array[a], array[b]); */
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
    return a;
}
void sorting(int *array, int low, int high, size_t size)
{
    int p = 0;

    if (low < high)
    {
        p = partition(array, 0, high, size);
        sorting(array, low, p - 1, size);
        sorting(array, p + 1, high, size);
    }
}