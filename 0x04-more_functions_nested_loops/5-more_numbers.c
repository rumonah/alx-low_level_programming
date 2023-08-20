#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int r;
	int m;

	for (r = 1 ; r <= 10 ; r++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m >= 10)
				_putchar('1');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
