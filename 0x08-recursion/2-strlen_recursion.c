#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - write a function that returns length of string
 * @s: string to print
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '0')
	{
		return (0 + _strlen_recursion(s + 1));
	}
	return (0);
}
