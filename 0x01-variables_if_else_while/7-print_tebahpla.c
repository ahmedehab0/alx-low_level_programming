#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar('\n');

	return (0);
}