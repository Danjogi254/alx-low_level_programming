#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees 2 dimensional array previous created
 * @grid: input int
 * @height: input int
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
