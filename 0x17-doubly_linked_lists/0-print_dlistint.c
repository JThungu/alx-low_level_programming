#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
