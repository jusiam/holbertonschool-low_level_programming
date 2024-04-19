#include "lists.h"

/**
 * add_dnodeint - Add a node at start of dlist.
 * @head: Pointer to the list.
 * @n: The number to new node.
 * Return: List with new node at start or NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)

		return (NULL);


	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)

		(*head)->prev = new;


	*head = new;

	return (new);
}
