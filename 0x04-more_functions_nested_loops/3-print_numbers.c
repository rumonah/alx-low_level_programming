#include "main.h"

/**
 * print_numbers - function that prints 0 to 9
 * _putchar to execute
 * Return: void
 */

void print_numbers(void)
{
	int r;

	for (r = 0 ; r <= 9 ; r++)
		_putchar(r + '0');
	_putchar('\n');
}

