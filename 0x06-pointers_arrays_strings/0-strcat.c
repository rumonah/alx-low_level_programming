#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concentrates two strings
 * @src: the input value
 * @dest: the input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int j;

	for (a = 0 ; dest[a] != '\0' ; a++)

	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[a] = src[j];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
