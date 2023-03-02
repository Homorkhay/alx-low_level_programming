#include "main.h"

/**
  * _strncat - join two strings with n bytes
  * @src: copy from
  * @dest: copy to
  * @n: number of char to be copied
 *
 * Return: returb dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
