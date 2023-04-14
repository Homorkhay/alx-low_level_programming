#include "main.h"

/**
  * create_file - creates a file
  * @filename: pointer to string rep. the file to be created
  * @text_content: NULL terminated string
  *
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, ret, len = 0;

	if (!filename)
	{
		return (0);
	}
	if (!text_content)
	{
		text_content = "";
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[len])
		len++;

	ret = write(fd, text_content, len);
	if (ret == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
