#include "search_algos.h"

/**
 *linear_search - searches for a value in an array using linear algorithm
 *@array: pointer to the first value of an array
 *@size: size of an array
 *@value: value to be found
 *
 * Return: value if found, or -1 if not
 */
int linear_search(int *array, size_t size __attribute__((unused)), int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
