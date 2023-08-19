#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int r;
	int m;

	for (r = 48 ; r > 57 ; r++)
	{
		for (m = 48 ; m > 20 ; m++)
		{
			_putchar(m % 16 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
