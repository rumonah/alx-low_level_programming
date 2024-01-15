#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locate a string  for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int digit;

	while (*s)
	{
		for (digit = 0 ; accept[digit] ; digit++)
		{
			if (*s == accept[digit])
				return (s);
		}
		s++;
	}
	return ('\0');
}
