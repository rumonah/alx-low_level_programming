#include "main.h"

/**
 * print_times_table - print n times table starting with 0
 * @n: parameter
 */

void print_times_table(int n)
{
	int multi, digit, result;

	if (!(n > 15 || n < 0))
	{
		for (multii = 0; multi <= n; multi++)
		{
			for (digit = 0; digit <= n; digit++)
			{
				res = (multi * digit);
				if (digit != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && digit != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 && digit != 0)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
