#include "sort.h"


/**
 * swap_node - interchange nodes
 * @curr: points to list 
 * @list: The list 
 */

void swap_nodes(listint_t *curr, listint_t **list)
{
	listint_t *first, *next_first, *prev_first, *two, *next_two, *prev_two = NULL;

	first = curr;
	two = curr->next;
	next_first = first->next;
	if (first->prev)
		prev_first = first->prev;
	else
		prev_first = NULL;
	if (two->next)
		next_two = two->next;
	else
		next_two = NULL;
	prev_two = two->prev;
	if (prev_first)
		prev_first->next = next_first;
	else
		*list = two;
	if (next_two)
		next_two->prev = prev_two;
	first->next = next_two;
	first->prev = two;
	two->next = first;
	two->prev = prev_first;
}

/**
 * insertion_sort_list - the insertion sort algo
 * @list:list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *order, *curr;
	int aux = 0, aux_2 = 0;

	if (!list)
		return;
	order = *list;
	while (order->next)
	{
		if (order->n > order->next->n)
		{
			swap_nodes(order, list);
			print_list(*list);
			aux = 1;
			curr = order->prev;

			while (curr->prev)
			{
				if (curr->prev->n > curr->n)
				{
					swap_nodes(curr->prev, list);
					print_list(*list);
					aux_2 = 1;
				}
				else
					break;
				if (!aux_2)
					curr = curr->prev;
				aux_2 = 0;
			}
		}
		if (!aux)
		order = order->next;

		aux = 0;
	}
}
