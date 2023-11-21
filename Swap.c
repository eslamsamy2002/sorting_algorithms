#include "sort.h"

/**
 *Swap - Swaps two nodes.
 *@node1: first node.
 *@node2: second node..
 *@list: head of the list.
 */
void Swap(listint_t **list, listint_t *node1, listint_t *node2)
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
