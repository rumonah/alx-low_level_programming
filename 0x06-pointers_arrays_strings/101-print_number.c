#include "main.h"

/**
 * print_number - print an integer
 * @n: integer parameter
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n2;

	n2 = n;

	if (n < 0)
	{
		n2 = -n;
	}
	_putchar('-');
	if (n2 / 10 != 0)
	{
		print_number(n2 /10);
	}
	_putchar((n2 % 10) + '0');
}
