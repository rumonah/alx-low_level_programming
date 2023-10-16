#include "main.h"

/**
 * print_times_table - print n times table starting with 0
 * @n: parameter
 */

void print_times_table(int n)
{
	int multi, digit, result;

	if (n >= 0 && n <= 15)
	{
		for (digit = 0 ; digit <= n ; digit++)
		{
			for (multi = 0 ; multi <= n; multi++)
			{
				{
					result = digit * multi;
					if (digit == 0)
					{
						_putchar(result + '0');
					}
					else if (result < 10 && digit != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(result + '0');
					}
					else if (result >= 10 && result < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((result / 10) + '0');
						_putchar((result % 10) + '0');
					}
					else if (result >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((result / 100) + '0');
						_putchar(((result / 10) % 10) + '0');
						_putchar((result % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
}
