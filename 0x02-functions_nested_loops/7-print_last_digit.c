#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @r: the integer input
 * Description: print with _putchar
 *
 * Return: last digit of r
 */

int print_last_digit(int r)
{
	int p;
	
	if (r < 0)
	{
		p = -1 * (r % 10);
	}
	else
	{
		p = r % 10;
	}
	_putchar(p);
	return (p);
}
