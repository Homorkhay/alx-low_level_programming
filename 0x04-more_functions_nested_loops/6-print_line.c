#include "main.h"

/**
  * print_line - write a function that draws a straight line in the terminal
  * @n: number of times the cahracter wil be printed
  */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
			_putchar(95);
		_putchar('\n');
	}
}
