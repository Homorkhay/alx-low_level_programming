#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: Pointer to string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result << 1;

		if (*b == '1')
		{
			result = result | 1;
		}

		b++;
	}
	return (result);
}

