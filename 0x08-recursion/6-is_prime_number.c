#include "main.h"

int actual_prime(int n, int r);

/**
 * is_prime_number - function that returns 1 inputs integer
 * @n: number to be evaluated
 *
 * Return: 1 if n is a prime number 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if a number is prime recursively
 * @n: number to be evaluated
 * @r: iterator
 *
 * Return: 1 if n is a prime number 0 if not
 */

int actual_prime(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (actual_prime(n, r - 1));
}
