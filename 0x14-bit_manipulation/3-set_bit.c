#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: Index starting from 0
 * @n: pointer to the unsigned long int
 *
 * Return: 1 on sucess, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
