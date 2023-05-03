#include "lists.h"
/**
 *listint_len - returns the number of elements
 *@h: pointer to the head node of the linked list.
 *Return: number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}