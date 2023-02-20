#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always o (success)
  */

int main(void)
{
	int c;

	char d;

	c = 0;
	d = 'a';
	while
		(c <= 9) {
			putchar(c + '0');
			c++;
		}
	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
