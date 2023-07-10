#include "main.h"
/**
 * read_textfile - read a text file and print it to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 *
 * Return: If filename is NULL, the file cannot be opened or read, or
 * write fails or returns an unexpected number of bytes, return 0.
 * Otherwise, return the actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytes_read, bytes_written;

	if (!filename)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (!buffer)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_read);

}
