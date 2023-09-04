#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size of array
 * @c: character to store in the array
 * Return: the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *arry;

	if (size == 0)
		return (NULL);

	arry = malloc(sizeof(char) * size);
	if (arry == NULL)
		return (NULL);

	for (r = 0 ; r < size ; r++)
		arry[r] = c;
	return (arry);
}
