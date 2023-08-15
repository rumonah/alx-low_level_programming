#include "main.h"

/**
 * _islower - check for lower cases.
 *Description: use _putchar to print
 *@c: collect alphabet
 * Return: 1 if 'c' is lowercase.
 */
int _islower(int c)
{
	int r;
	int lower = '0';

	for (r = 'a' ; r <= 'z' ; r++)
	{
		if (r == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
