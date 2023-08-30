#include "main.h"
#include <stdio.h>

/**
 * _factorial - return factorial of a given number
 * @n: is lower than 0 the function should return
 * -1 to indicate an error
 *
 * Return: n factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
