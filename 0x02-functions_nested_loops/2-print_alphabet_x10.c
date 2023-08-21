#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char j, r;
	
	for (j = 0 ; j <= 9 ; j++)
	{
		for (r = 'a' ; r <= 'z' ; r++) 
	{
		_putchar(r);
	}
	_putchar('\n');
	}
}
