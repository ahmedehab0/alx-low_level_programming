#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and upper case
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
