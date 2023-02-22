#include "main.h"

/**
  * print_times_table - print multiplication tables starting from 0
  * @n:Number to be treated
  *
  * Return: Number matrix
  */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n >= 0 && n <= 14)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0;  b <= n; b++)
			{
				c = a * b;
				if (c > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(c + '0');
				}
			}

			_putchar('\n');
		}
	}

}
