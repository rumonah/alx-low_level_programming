#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print the chessboard
 * @a: pointer to pieces to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int r, b;

	for (r = 0 ; r < 8 ; r++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(a[r][b]);
		}
		_putchar('\n');
	}
}
