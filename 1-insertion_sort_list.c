#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list
 *                      of integers in ascending order using the Insertion
 *                      sort algorithm
 *@list: head of doubly linked list
 *Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *temp = NULL, *k;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (node = *list; node != NULL;)
	{
		node = node->next;
		k = node->prev;
		while (k != NULL)
		{
			if (node->n < k->n)
			{
				temp = node;
				if (node->next)
					(node->next)->prev = temp->prev;
				k->next = temp->next;
				node = node->prev;
				temp->prev = node->prev;
				temp->next = node;
				if (node->prev)
					(node->prev)->next = temp;
				node->prev = temp;
				if (temp->prev == NULL)
					*
					list = temp;
				print_list(*list);
				node = node->prev;
			}
			else
			{
				break;
			}
		}
	}
}