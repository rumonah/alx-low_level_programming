#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer parameter
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		_putchar(48);
		r = -r;
	}
	if (r / 10)
	{
		print_number(r / 10);
	}
	_putchar(r % 10 + '0');
}
