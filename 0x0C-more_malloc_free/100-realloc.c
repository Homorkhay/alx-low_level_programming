#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates memory block using malloc and free
  * @ptr: allocated memory
  * @old_size: size in bytes of the allocated memory for ptr
  * @new_size: the new_size in bytes of the new memory block
  *
  * Return: Nothing
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *) p)[i];
	}

	free(ptr);
	return (p);
}
