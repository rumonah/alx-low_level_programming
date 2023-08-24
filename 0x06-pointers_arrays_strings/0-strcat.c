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
	int num;
	int a;

	a = 0;
	num = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	a = 0;
	while (dest[num] != '\0')
	{
		dest[num] = src[a];
		a++;
		num++;
	}
	dest[num] = '\0';
	return (dest);
}
