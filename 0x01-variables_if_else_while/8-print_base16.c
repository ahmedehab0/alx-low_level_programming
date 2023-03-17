#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char l;

	for (i = 48; i < 57; i++)
		putchar(i);

	for (l = 97; l <= 102; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
