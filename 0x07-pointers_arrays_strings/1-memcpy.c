#include "main.h"

/**
  * _memcpy - copies memory area
  * @n: bytes to be copied
  * @src: memory area bytes to be copied
  * @dest: where bytes from src is copied to
  *
  * Return: return dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
