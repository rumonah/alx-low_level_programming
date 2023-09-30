#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to change number
 * @index: index of bit to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *n;
	unsigned int index;

	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
