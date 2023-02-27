#include "main.h"

/**
  * swap_int - swaps the value of integers
  * @a: param1 to be checked
  * @b: param2 to be checked
  *
  * Return: returns nothing on success
  */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
