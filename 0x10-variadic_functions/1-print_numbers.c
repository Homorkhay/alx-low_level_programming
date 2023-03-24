#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - print numbers followed by a new line
  * @separator: is the string to abe peinted between two numbers
  * @n: number of integers passed to the function
  *
  * Return: Nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		{
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
