#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - flips a number
 * @n: param1
 * @m: param2
 *
 * Return: ....
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
