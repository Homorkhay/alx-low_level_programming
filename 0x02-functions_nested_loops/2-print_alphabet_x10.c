#include "main.h"

/**
  * print_alphabet_x10 - print 10 times lowercase alphabets
  */

void print_alphabet_x10(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
