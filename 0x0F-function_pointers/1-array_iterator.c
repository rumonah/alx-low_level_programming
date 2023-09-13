#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: the array
 * @action: pointer to the to use
 * @size: size of element
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;

	for (r = 0 ; r < size ; r++)
	{
		action(array[r]);
	}
}
