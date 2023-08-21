#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int lenth = 0;
	int r;

	for (r = 0 ; s[r] != '\0'; r++)
		lenth++;
	for (r = lenth - 1 ; r >= 0; r--)
		_putchar(s[r]);
	_putchar('\n');
}
