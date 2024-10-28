#include "sort.h"

/**
 * swp_ndes - Swops two nodes in a doubly linked list
 *
 * @list: Pointer to the head of the doubly linked list
 * @first_int: First Node to be swopped
 * @second_int: The second node to be swopped
 */
void swp_ndes(listint_t **list, listint_t *first_int, listint_t *second_int)
{
	if (first_int->prev)
		first_int->prev->next = second_int;
	else
		*list = second_int;
	if (second_int->next)
		second_int->next->prev = first_int;

	first_int->next = second_int->next;
	second_int->prev = first_int->prev;
	second_int->next = first_int;
	first_int->prev = second_int;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr_int, *tmp_int;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr_int = (*list)->next;
	while (curr_int != NULL)
	{
		tmp_int = curr_int;
		while (tmp_int->prev != NULL && tmp_int->prev->n > tmp_int->n)
		{
			swp_ndes(list, tmp_int->prev, tmp_int);
			print_list(*list);
		}
		curr_int = curr_int->next;
	}
}
