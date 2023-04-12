#include "main.h"
#include <stdlib.h>

/**
  * set_bit - set the value of a bit to 1 at a given index
  * @n: value
  * @index: index starying from 0
  *
  * Return: Retturn 1 if successful and -1 if error occured
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;

	*n = *n | mask;
	return (1);
}
