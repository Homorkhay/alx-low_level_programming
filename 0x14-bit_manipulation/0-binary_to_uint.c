#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string containing a binary number
  *
  * Return: converted number
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;
	i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num << 1;
			if (b[i] == '1')
				num = num | 1;
			i++;
		}
		else
			return (0);
	}
	return (num);
}
