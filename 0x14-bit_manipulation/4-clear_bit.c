#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of bit to 0 at a given index
 * @n: value
 * @index: Index starting from 0
 *
 * Return: Return 1 if it worked and -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= num_bits)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
