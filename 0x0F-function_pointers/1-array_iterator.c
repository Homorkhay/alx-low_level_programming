#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator - prints the element of the array in hexadecimal
  * @array: Array to be printed
  * @size: Size of the array
  * @action: Pointer to a function
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
