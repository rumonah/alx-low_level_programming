#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @height: height of the grid
 * @grid: the address of the two dimensional grid
 * Return: height of grid
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0 ; r < height ; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
