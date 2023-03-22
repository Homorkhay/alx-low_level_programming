#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array of integers
 * @size: number of elements in the array
 * @cmp: Pointer to integer
  *
  * Return: Nothing
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
