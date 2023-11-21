#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list
 *                     of integers in ascending order using the Insertion
 *                     sort algorithm
 *@list: Head of doubly linked list
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *temp = NULL;

	if (list == NULL || *list == NULL || !(*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node)
	{
		temp = node->next;
		while (node->prev != NULL && node->n < node->prev->n)
		{
			Swap(list, node->prev, node);
			print_list(*list);
		}

		node = temp;
	}
}
