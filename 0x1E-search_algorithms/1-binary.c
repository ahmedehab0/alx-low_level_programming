#include "search_algos.h"

/**
 *binary_search - searches for a value in an array using binary algorithm
 *@array: pointer to the first value of an array
 *@size: size of an array
 *@value: value to be found
 *
 * Return: value if found, or -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size, i = 0, m = 0;

	if (array == NULL)
		return (-1);
	while (r > l)
	{
		m = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d ", array[i]);
		}
		puts("");

		if (array[m] == value)
			return (m);

		if (array[m] < value)
		{
			l = m + 1;
		}
		if (array[m] > value)
		{
			r = m - 1;
		}
	}
	return (-1);

}
