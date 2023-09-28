#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recurion - prints a string in reverse.
 * @s: the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}
