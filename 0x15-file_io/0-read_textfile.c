#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read, bytes_write;
	char *buffer = malloc(letters);

	int file = open(filename, O_RDONLY);

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
		return (0);

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	close(file);
	return (bytes_write);
}
