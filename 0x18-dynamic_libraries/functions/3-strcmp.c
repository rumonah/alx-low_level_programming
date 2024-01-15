#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares 2 string
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: strcmp
 */
int _strcmp(char *s1, char *s2)
{
	int numb;
	int value;

	numb = 0;

	while (s1[numb] == s2[numb] && s1[numb] != '\0')
	{
		numb++;
	}

	value = s1[numb] - s2[numb];
	return (value);
}
