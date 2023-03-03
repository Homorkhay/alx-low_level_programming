#include <stdio.h>

/**
  * reverse_array - reverse the content of an array of integers
  * @a: array
  * @n: number of elements of the array
  *
  * Return: return rev
  */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
