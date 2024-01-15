#include "main.h"

/**
 * _puts - function that prints a string followed by a new line,to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int r;

	for (r = 0 ; str[r] != '\0' ; r++)
		_putchar(str[r]);
	_putchar('\n');
}
