#include "main.h"
/**
 * times_table - function that prints 9
 * times table
 *
 * Description: print it followed by 2 spaces
 *
 * use _putchar
 */
void times_table(void);
{
	int j, k, m;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	}
	for (k = 0 ; k <= 9 ; k++)
	{
		m = (i * j);
	}
	if ((m / 10) > 0)
	{
		_putchar((m / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
	_putchar((m % 10) + '0');
	if (j < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n')
}
