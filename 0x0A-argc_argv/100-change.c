#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print out the change that needs to given
 * @argc: number of arguments to be passed
 * @argv: number of variables to calculate
 * Return: always 0 for sucess
 */

int main(int argc, char *argv[])
{
int i, count = 0,
changes[] = {1, 2, 5, 10, 25}, j = 4;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
i = atoi(argv[1]);
if (i < 0)
{
	printf("0\n");
}
if (argc == 2 && i >= 0)
{
while (i != 0)
{
if (i - changes[j] >= 0)
{
i -= changes [j];
count++;
}
else
{
	j--;
}
}
printf("%d\n", count);
}
return (0);
}
