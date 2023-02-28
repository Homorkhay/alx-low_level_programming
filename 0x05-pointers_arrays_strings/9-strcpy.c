#include "main.h"

/**
  * _strcpy - writes a function that copies string
  * @src: string copied
  * @dest: destination of string
  *
  * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while (*src)
	{
		count++;
		src++;
	}
	for (i = 0; i < count; i++)
		src--;
	for (i = 0; i < count; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
