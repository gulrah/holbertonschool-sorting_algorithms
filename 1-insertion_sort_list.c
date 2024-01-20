#include "sort.h"

/**
 * swap_dll - Swap two elements in a double linked list
 * @hi: The higher element
 * @lo: The lower element
 */
void swap_dll(listint_t *hi, listint_t *lo)
{
	hi->next = lo->next;

	if (hi->prev)
		hi->prev->next = lo;
	if (lo->next)
		lo->next->prev = hi;

	lo->next = hi;
	lo->prev = hi->prev;
	hi->prev = lo;
}

/**
 * insertion_sort_list - Implement insertion sort algorithm
 * @list: The list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *tmp2 = NULL;

	if (list == NULL)
		return;

	for (tmp = *list; tmp; tmp = tmp->next)
	{
		tmp2 = tmp;

		while (tmp2->prev && (tmp2->n < tmp2->prev->n))
		{
			swap_dll(tmp2->prev, tmp2);

			if (!tmp2->prev)
				*list = tmp2;

			print_list(*list);
		}
	}
}
