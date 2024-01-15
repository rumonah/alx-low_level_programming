#include "main.h"

/**
 * _strcpy -  copies of string
 * @dest: is the destination
 * @src: is the source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0 ; src[r] != '\0' ; r++)
		dest[r] = src[r];
	dest[r] = '\0';
	return (dest);
}
