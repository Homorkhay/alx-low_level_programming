#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: Values to be printed
  * @max: Values
  *
  * Return: Nothing
  */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
