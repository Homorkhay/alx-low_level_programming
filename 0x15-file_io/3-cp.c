#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: ......
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - .....
  * @src: .......
  * @dest: ......
  *
  * Return: ....
  */

void copy_file(const char *src, const char *dest)
{
	int file_from, file_to, readed;
	char buffer[BUFFER_SIZE];

	file_from = open(src, O_RDONLY);
	if (!src || file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", src);
		exit(98);
	}

	file_to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, readed) != readed || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
