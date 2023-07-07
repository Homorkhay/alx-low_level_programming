#include "main.h"

/**
 * clear_bit - sets the vakue of a bit to 0 at given index
 * @index: Index starting from 0
 * @n: Pointer to unsigned long int whose bit you want to clear
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);
}
