#include "main.h"

/**
 * _strlen - print a function that returns th elength of a string
 * @s: is the sting
 * Return: length
 */

int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}
