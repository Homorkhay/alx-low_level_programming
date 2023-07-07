#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
