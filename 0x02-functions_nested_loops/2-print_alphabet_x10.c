#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet x10
 *
 * Return: Always 0
 */
int main(void)
{
	int r;
	char j;

	for (r =10 ; r < 10 ;r++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n')
	}
}
