#include "hash_tables.h"

/**
 *hash_table_create - function to create a hash table
 *@size: size of the table
 *
 *Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t) * size);

	if (!ht->array)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
