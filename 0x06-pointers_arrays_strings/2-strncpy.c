#include "main.h"

/**
  * _strncpy - copies a string
  * @src: copy from
  * @dest: copy to
  * @n: number of char to be copied
  *
  * Return: return dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
