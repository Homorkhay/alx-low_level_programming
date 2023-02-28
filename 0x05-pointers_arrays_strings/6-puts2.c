#include "main.h"

/**
  * puts2 - prints charcacter of a string
  * @str: parameter to be updated
  *
  * Return: always on sucess
  */

void puts2(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
		str--;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
