#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: int 1
 * @height: int 2
 * Return:NULL if it fails or ints are negative or 0
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		n[a] = malloc(sizeof(int) * width);

		if (n[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(n[b]);
			}
			free(n);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			n[c][d] = 0;
		}
	}
	return (n);
}
