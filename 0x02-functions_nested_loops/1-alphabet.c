#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	for (int i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
