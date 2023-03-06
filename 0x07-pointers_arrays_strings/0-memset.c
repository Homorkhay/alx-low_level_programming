#include "main.h"

/**
  * _memset - fills memory with constant byte
  * @n: number of bytes
  * @s: memory area to be filled with bytes
  * @b: bytes of memory area
  *
  * Return: the memory area to be filled
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
