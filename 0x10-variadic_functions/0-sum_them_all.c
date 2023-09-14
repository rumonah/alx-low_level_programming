#include "variadic_function"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passes to the function
 * @...: variable number of parameters to calculate the sum
 * Return: If n == 0 return 0 otherwise sum of parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int r, sum = 0;

	va_start(ap, n);

	for (r = 0 ; r < n ; r++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
