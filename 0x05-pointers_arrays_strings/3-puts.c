#include "main.h"

/**
  * _puts - print string
  * @str: strings to be printed
  *
  * Return: nothing on success
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
