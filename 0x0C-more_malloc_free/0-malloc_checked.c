#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate the memory
 * @b: the number of bytes to be allocated
 * Return: pointer to allocate the memory
 */

void *malloc_checked(unsigned int b)
{
	void *prt;

	prt = malloc(b);

	if (prt == NULL)
		exit(98);

	return (prt);
}
