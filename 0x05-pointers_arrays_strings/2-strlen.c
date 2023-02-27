#include <stdio.h>

/**
  * _strlen - prints a string
  * @s: parameter to be printed
  *
  * Return: Returns nothing on success
  */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return(count);
}
