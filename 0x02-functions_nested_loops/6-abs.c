#include "main.h"

/**
  * _abs - compute the absolute value of an integer
  * @n: parameter
  * Return: returns absolute value of an integer
  */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
