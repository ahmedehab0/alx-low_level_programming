#include "lists.h"

/**
 *add_dnodeint - function that adds a new node at the beginning of a linked list
 *
 * @head: linked list
 *@n: value of the new node
 *Return: address of the new element 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *h;

	if (!new)
		return (NULL);

	if (!*head)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	while (h->prev)
	{
		h = h->prev;
	}
	new->next = h;
	h->prev = new;
	*head = new;

	return (new);
}
