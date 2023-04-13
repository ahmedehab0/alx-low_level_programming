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
int i = atoi(argv[1]), count = 0,
changes[] = {1, 2, 5, 10, 25}, j = 4;
if (argc == 2 && i > 0)
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
else
{
printf("Error\n");
return (1);
}
return (0);
}
