#include <stdio.h>

/**
  * main - Entry point
  * main prints all possible combinations of single-digit numbers
  * number must be seperated by comma followed by space
  * numbers should be printed in ascending order
  * Return: Always 0 (success)
  */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
