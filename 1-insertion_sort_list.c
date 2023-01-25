#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *swap;


	for (i = (*list)->next; i; i = i->next)
	{
		j = i;
		while (j->prev != NULL && j->n < j->prev->n)
		{
			if (j->n == 7)
			{
				printf("\n\n%d\t%d\n", j->n, j->prev->n);
			}
			swap = j->prev;
			if (swap->prev)
				swap->prev->next = j;

			if (j->next)
				j->next->prev = swap;
				
			j->prev = swap->prev;
			swap->prev = j;
			swap->next = j->next;
			j->next = swap;
			print_list(j);
		}
	}
}
 