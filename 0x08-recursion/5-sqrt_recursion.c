#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int r);

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: square root number to be calculated
 *
 * Return: resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of the number
 * @n: number to calculate the sqour root of
 * @r: integer
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r - r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
