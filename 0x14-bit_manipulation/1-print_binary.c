#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary number to print
 */
void print_binary(unsigned long int n)
{
	int r, bina = 0;
	unsigned long int bitw;

	for (r = 63 ; r >= 0 ; r--)
	{
		bitw = n >> r;

		if (bitw & 1)
		{
			_putchar('1');
			bina++;
		}
		else if (bitw)
			_putchar('0');
	}
	if (!bina)
		_putchar('0');
}
