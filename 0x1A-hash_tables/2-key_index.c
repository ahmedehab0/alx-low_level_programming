#include "hash_tables.h"

/**
 *key_index - function that gives the index of the key
 *
 *@key: array of chars
 *@size: unsigned int
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
