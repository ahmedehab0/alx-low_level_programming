#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number
 * 0 if there is one or more chars in the string that is not 0 or 1
 * 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0, i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result <<= 1;
		if (b[i] == '1')
		{
			result |= 1;
		}
	}
	return (result);
}
