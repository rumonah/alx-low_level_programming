#include "main.h"

/**
 * _isdigit - function checks for a digit 0 to  9
 * @c: is the digit
 *
 * Return: 1 on success and 0 failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
