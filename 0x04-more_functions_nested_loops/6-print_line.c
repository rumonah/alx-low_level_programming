#include "main.h"

/**
 * print_line - print straight lines on terminal
 * @n: number of times character '_' will be printed
 * Return: 0
 */

void print_line(int n)
{
		int r;

		for (r = 0 ; r < n ; r++)
		{
			_putchar('_');
		}
		_putchar('\n');

}
