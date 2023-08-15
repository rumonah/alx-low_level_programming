#include "main.h"
/**
 * print_sign -print the sign of a number
 * @n: the numbers to be cheched
 * Return: 1 for positive number, -1 for negative numbers or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(46);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
}

