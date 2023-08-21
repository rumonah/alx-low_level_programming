#include "main.h"
/**
 * times_table - function that prints 9
 * times table
 *
 * Description: print it followed by 2 spaces
 *
 */


void times_table(void)
{
	int j, k, m;

	for (j = 0 ; j <= 9 ; j++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (k = 1 ; k <= 9 ; k++)
		{
			m = j * k;

			if ((m / 10) > 0)
			{
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
