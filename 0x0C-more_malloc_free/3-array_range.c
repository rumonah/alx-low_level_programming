#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to be new array
 */
int *array_range(int min, int max)
{
	int start;
	int r, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	start = malloc(sizeof(int) * size);

	if (start == NULL)
		return (NULL);

	for (r = 0 ; min <= max ; r++)
		start[r] = min++;

	return (start);
}
