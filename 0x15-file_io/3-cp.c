#include "main.h"
/**
 *_close - closes a file
 *@fd: FD_VALUE
 *Return: 1
 */
void _close(int fd)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
* main - program that copies the content of a file to another
* @ac: num argument
* @av: string argument
* Return: 0
*/
int main(int ac, char **av)
{
	int fd_1, fd_2;
	ssize_t bytes_read = 1024, bytes_written;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		_close(fd_1);
		exit(99);
	}
	while (bytes_read == 1024)
	{
		bytes_read = read(fd_1, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		bytes_written = write(fd_2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
_close(fd_1);
_close(fd_2);
return (0);
}
