#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function to copy a string and return pointer to the new string
  * @str: string to be copied
  *
  * Return: Nothing on success
  */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	newStr = malloc((sizeof(char) * i) + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}
	while (a < i)
	{
		newStr[a] =  str[a];
		a++;
	}
	newStr[a] = '\0';
	return (newStr);
}
