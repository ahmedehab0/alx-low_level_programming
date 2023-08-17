#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	last = *head;
	new->n = n;
	new->next = NULL;

	if (last == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;

	return (new);
}
