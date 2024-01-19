#include "main.h"
#include <stdio.h>

/**
 * _strspn - get the length of a prefix
 * @s: string to search
 * @accept: the prefix to be measured
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int digit;

	while (*s)
	{
		for (digit = 0 ; accept[digit] ; digit++)
		{
			if (*s == accept[digit])
			{
				bytes++;
				break;
			}

			else if (accept[digit + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
