#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @height: height of the grid
 * @grid: the address of the two dimensional grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0 ; height--)
			free(grid(height));
		free(grid);
	}
}
