#include "main.h"

/**
  * _isdigit - write a function that checks for a digit
  * @c: parameter
  *
  * Return: Returns 1 if c is a digit and 0 if otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
