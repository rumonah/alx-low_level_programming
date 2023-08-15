#include "main.h"

/**
 * _islower - check for lower cases.
 *Description: use _putchar to print
 *@c: collect alphabet
 * Return: 1 if 'c' is lowercase.
 */
int _islower(int c)
{

	if ((c >= 97) ; && (c <= 122))
	{
		return (1);
	}
	return (0);
}
