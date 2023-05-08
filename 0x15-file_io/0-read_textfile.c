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
if (filename == NULL) 
{
return (0);
}
FILE *fp = fopen(filename, "r");

if (fp == NULL) 
{
return (0);
}
char *buffer = malloc(letters);

if (buffer == NULL) 
{
fclose(fp);
return (0);
}
ssize_t bytes_read = fread(buffer, 1, letters, fp);

if (bytes_read == 0) 
{
fclose(fp);
free(buffer);
return (0);
}
ssize_t bytes_written = fwrite(buffer, 1, bytes_read, stdout);

if (bytes_written != bytes_read) 
{
fclose(fp);
free(buffer);
return (0);
}
fclose(fp);
free(buffer);
return (bytes_written);

}
