#include "lists.h"

/**
 * print_dlistint - Print elements of dlistint_t list.
 * @h: The dlistint_t list.
 * Return: Number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
