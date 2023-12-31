#include "main.h"

/**
 * _strncat - concentrate two strings
 *  use the most n bytes in src
 *  @n: input value
 *  @dest: destination value
 *  @src: source value
 *  Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int num;
	int a;

	num = 0;
	while (dest[num] != '\0')
	{
		num++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[num] = src[a];
		a++;
		num++;
	}
	dest[num] = '\0';
	return (dest);
}
