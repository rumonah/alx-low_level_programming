#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: parameter character
 * Return: 0 on failure and 1 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
