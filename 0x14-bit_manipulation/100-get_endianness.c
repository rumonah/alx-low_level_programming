#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks if a machine is little or big endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *r = (char *) &j;

	return ((int)*r);
}
