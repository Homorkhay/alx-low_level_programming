#include "main.h"

/**
  * append_text_to_file - append text at the end of a file
  * @filename: name of the file
  * @text_content: NULL terminated string
  *
  * Return: 1 on success -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, ret, len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	while (text_content[len])
		len++;

	ret = write(file, text_content, len);

	if (ret == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
