#include "main.h"

/**
  * read_textfile - reads a text file and print it to standard output
  * @filename: textfile to read
  * @letters: number of letters to read and print
  *
  * Return: actual number of letters it should read and write
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, bytes_read;
	char *buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY, 0600);
	if (file == -1)
	{
		return (0);
	}
	bytes_read = read(file, buffer, letters);

	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file);
	return (bytes_read);
}
