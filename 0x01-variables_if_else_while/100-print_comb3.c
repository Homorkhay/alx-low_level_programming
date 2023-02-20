#include <stdio.h>

/**
  * main - Entry point
  * main prints all differnrt combinations of two digits
  * numbers must be seperated by comma followed by space
  * The two digits must be different
  * numbers should be printed in ascending order
  * Return: Always 0 (success)
  */

int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 8 && y == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
