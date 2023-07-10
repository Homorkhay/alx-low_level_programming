#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the standard output
 * @filename: name of the textfile to be read
 * @letters: number of letters to be read and printe
 *
 * Return: the actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
