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
	unsigned int a = 0, b = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	if (n < leng2)
		s = malloc(sizeof(char) * (leng1 + n + 1));
	else
		s = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (!s)
		return (NULL);

	while (a < leng1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < leng2 && a < (leng1 + n))
		s[a++] = s2[b++];

	while (n >= leng2 && a < (leng1 + leng2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
