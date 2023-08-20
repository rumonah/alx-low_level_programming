#include "main.h"

/**
 * print_diagonal - print diagonal using '\' character
 * @n: number of times '\' should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int r, k;
		
		for (r = 0 ; r < n ; r++)
		{
			for (k = 0 ; k < r ; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
