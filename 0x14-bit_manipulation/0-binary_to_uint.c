#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * * binary_to_uint - converts binary number to unsigned integer
 * @b: Pointer to string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	result = 0;
	i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result = (result << 1);
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
