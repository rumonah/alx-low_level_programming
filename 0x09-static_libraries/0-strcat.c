#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concentrates two strings
 * @src: the input value
 * @dest: the input value
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int destsiz = 0;
	int srcsiz = 0;
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
		srcsiz++;
	for (a = 0 ; dest[a] != '\0' ; a++)
		destsiz++;
	for (a = 0 ; a <= srcsiz ; a++)
		dest[destsiz + a] = src[a];
	return (dest);
}
