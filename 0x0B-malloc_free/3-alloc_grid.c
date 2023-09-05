#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **output;
	int r;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (r = 0 ; r < height ; r++)
	{
		output[r] = malloc(sizeof(int) * width);

		if (output[r] == NULL)
		{
			free(output);
			for (k = 0 ; k <= height ; k++)
				free(output[k]);
			return (NULL);
		}
		for (k = 0 ; k < width ; k++)
			output[r][k] = 0;
	}
	return (output);
}
