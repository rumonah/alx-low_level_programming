#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks if a machine is little or big endianness.
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int r = 1;
	char *c = (char *) &r;

	return (*c);
}
