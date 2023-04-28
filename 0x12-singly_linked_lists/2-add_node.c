#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
int len = 0;
list_t *new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		while (str[len])
			len++;

		new_node->str = strdup(str);
		new_node->next = *head;
		new_node->len = len;

		if (strdup(str) == NULL){
		return (NULL);
		free(new_node);
		}

		*head = new_node;
		return (new_node);
	}

	return (NULL);

}
