#include "main.h"
#include "stdio.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary number to print
 */
void print_binary(unsigned long int n)
{
	int r, b = 0;
	unsigned long int  count;

	for (r = 63 ; r >= 0 ; r--)
	{
		count = n >> r;

		if (count & 1)
		{
			_putchar('1');
			b++;
		}
		else if (count)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}

