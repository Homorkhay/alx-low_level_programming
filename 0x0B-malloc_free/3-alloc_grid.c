#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - returns pointer to a 2-dimensional array of integers
  * @width: width of the grid
  * @height: height of the grid
  *
  * Return: Nothing
  */

int **alloc_grid(int width, int height)
{
	int b, c, d, e;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);

		if (a[b] == NULL)
		{
			for (c = b; c >= 0; c--)
			{
				free(a[c]);
			}
			free(a);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
		{
			a[d][e] = 0;
		}
	}
	return (a);
}
