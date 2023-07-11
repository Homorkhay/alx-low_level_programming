#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to append to the file
 *
 * Return: 1 if file exists, -1 if file doesnot exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1 || bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
