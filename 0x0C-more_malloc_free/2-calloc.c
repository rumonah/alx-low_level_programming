#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocates the memory for an array
 * @nmemb:  the number of elements in array
 * @size: size of each element
 * Return: pointer ro allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * *_memset - fill memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return:  pointer to the memory area in s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		s[a] = b;
	}

	return (s);
}
