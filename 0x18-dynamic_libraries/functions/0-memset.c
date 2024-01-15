#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @n: number of times to be copyb
 * @b: char to copy
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0 ; r < n ; r++)
	{
		s[r] = b;
	}

	return (s);
}
