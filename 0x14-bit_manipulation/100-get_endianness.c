#include "main.h"

/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *p;

	i = 1;
	p = (char *)&i;

	return (*p == 1);
}
