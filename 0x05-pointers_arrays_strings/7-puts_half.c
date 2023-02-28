#include "main.h"

/**
  * puts_half - prints second half of the string
  * @str: string to be printedg
  *
  * Return: nothing on sucess
  */

void puts_half(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
		str--;
	i = (count % 2 == 0) ? count / 2 : (count + 1) / 2;

	for (; i < count ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
