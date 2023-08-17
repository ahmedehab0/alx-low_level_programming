#include "lists.h"

/**
 *dlistint_len - function to get the length of a linked list
 *
 *@h: linked list
 *Return: length of a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	if (!h)
		return (i);

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
