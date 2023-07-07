#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: Index starting from
 * @n: binary number
 *
 * Return: value of bit at index else -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
