#include <stdio.h>
/**
*main - program that prints the size of various types
*
*return: always 0 (success)
*/

int main(void)
{
char c;
int i;
long int l;
long long int ll;
float f;
	printf("size of a char: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("size of an long int: %lu byte(s).\n", (unsigned long)
	sizeof(l));
	printf("size of an long long int: %lu byte(s).\n", (unsigned long
	)sizeof(ll));
	printf("size of an float: %lu byte(s).\n", (unsigned long)sizeof(f));
	return (0);
}
