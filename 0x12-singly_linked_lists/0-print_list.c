#include "lists.h"

size_t print_list(const list_t *h)
{
int i = 0;

if (*h == NULL)
	printf("[0] (nil)");

	while(*h != NULL)
	{
		printf("%d\n", h->value);
		*h = h->link;
		i++;
	}
	return (i);
}
