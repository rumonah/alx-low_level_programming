#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - return square root number
 * @n: square root number to be calculated
 *
 * Return: resuling square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0))
}
