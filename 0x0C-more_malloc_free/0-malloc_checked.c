#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - writes a function that allocates memory through malloc
  * @b: unsigned integer allocated
  *
  *Return: Nothing
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
