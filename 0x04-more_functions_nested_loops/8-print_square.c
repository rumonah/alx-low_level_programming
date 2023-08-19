#include "main.h"

/**
 * print square - prints square using the '#' character
 * @size: print size of the square
 * Return: void
 */
void print_square(int size)
{
	int a, b;
	
	if (size <= 0)
		_putchar('\n');
	for (a = 1 ; a <= (size) ; a++)
	{
		for (b = 1 ; b <= (size) ; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
