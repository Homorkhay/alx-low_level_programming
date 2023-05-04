#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: value
 * @index: Index starting from 0
 *
 * Return: 1 if successful and -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
