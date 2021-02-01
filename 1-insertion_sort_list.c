#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order (Insertion sort)
 * @list: Doubly linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	int x = 0, element = 0, pre = 0;
	listint_t *p1 = list;
	listint_t *p2 = list;

	while (p2)
	{
		p2 = p2->next;
		if p2->n > 
	}

}


int i, element, j;
    for (i = 1; i < n; i++) {
	element = array[i];
	j = i - 1;
	while (array[j] > element) {
        	array[j + 1] = array[j];
        	j = j - 1;
        }
        array[j + 1] = element;
    }