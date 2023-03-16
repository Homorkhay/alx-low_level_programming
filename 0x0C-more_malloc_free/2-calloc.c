#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: memory for an array
  * @size: bytes
  *
  * Return: Nothing
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
