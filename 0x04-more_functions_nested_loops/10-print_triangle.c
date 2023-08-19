#include "main.h"

/**
 * print_triangle - Entry point
 * Description: print  in diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= size ; a++)
		{
			for (c = size - b ; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (b = 1 ; b <= a ; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
