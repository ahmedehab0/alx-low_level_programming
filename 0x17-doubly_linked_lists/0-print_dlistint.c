#include "lists.h"

/**
 *print_dlistint - function to print a doubly linked list
 *@h: linked list
 *
 *Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (i);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
