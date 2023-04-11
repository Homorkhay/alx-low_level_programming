#include "main.h"
#include <stdio.h>

/**
  * get_bit - returns the value of a bit at given index
  * @n: value
  * @index: index starting from 
  *
  * Return: the value of the bit at index or -1 if error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index) & 1;
}
