#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int bin_nu = 0;

	if (!b)
		return (0);

	for (r = 0 ; b[r] ; r++)
	{
		if (b[r] < '0' || b[r] > '1')
			return (0);
		bin_nu = 2 * bin_nu + (b[r] - '0');
	}

	return (bin_nu);
}
