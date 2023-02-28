#include <stdio.h>

/**
  * print_array - prints element of an array of integers
  * @n: number of elements of the array to be printed
  * @a: array to be printed
  *
  * Return: nothibg on success
  */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(",");
		count++;
	}
	putchar('\n');
}
