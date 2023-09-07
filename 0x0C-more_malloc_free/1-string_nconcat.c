#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @n: number of bytes frpm s2 to concatenated to s1
 * @s1: string to be appended
 * @s2: string to be concatenated from
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0; b =0, lenght1 = 0,length2 = 0;

	while (s1 && s1[lenght1])
		length1++;
	while (s2 && s2[lenght2])
		lenght++;

	if (n < lenth1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < length2 && a < (length1 + n))
		s[a++] = s2[b++];

	while (n >= lenght2 && a < (length1 + lenght2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
