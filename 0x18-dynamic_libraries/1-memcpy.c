#include "main.h"

/**
 * _memcpy - function that copies @n bytes from memory area @src to @dest
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;

	while (r < n)
	{
		dest[r] = src[r];
		r++;
	}

	return (dest);
}
