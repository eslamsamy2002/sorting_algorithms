#include "sort.h"

/**
 *insertion_sort_list - function that sorts a doubly linked list
 *                      of integers in ascending order using the Insertion
 *                      sort algorithm
 *@list: doubly linked list
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node)
	{
		temp = node->next;
		while (node->prev != NULL && node->n < node->prev->n)
		{
			swap_nodes(list, node->prev, node);
			print_list(*list);
		}

		node = temp;
	}
}

/**
 *swap_nodes - Swaps two nodes.
 *@node1: first node.
 *@node2: second node..
 *@list: head of the list.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	node2->prev = node1->prev;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->next = node1;
	node1->prev = node2;
	if (node2->prev != NULL)
		node2->prev->next = node2;
	else
	       *list = node2;
}

