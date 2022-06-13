#include "sort.h"

/**
*insertion_sort_list - method insertion sort
*@list: lista
**/
void insertion_sort_list(listint_t **list)
{
	listint_t *auxNext = NULL;
	listint_t *aux = NULL;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;

	auxNext = (*list)->next;
	while (auxNext)
	{
		aux = auxNext->next;
		while (auxNext->prev && auxNext->n < auxNext->prev->n)
		{
			auxNext->prev->next = auxNext->next;
			if (auxNext->next)
				auxNext->next->prev = auxNext->prev;

			auxNext->next = auxNext->prev;
			if (auxNext->next)
			{
				auxNext->prev = auxNext->next->prev;
				auxNext->next->prev = auxNext;
			}
			if (auxNext->prev)
				auxNext->prev->next = auxNext;
			else
				(*list) = auxNext;
			print_list(*list);
		}
		auxNext = aux;

	}
}
