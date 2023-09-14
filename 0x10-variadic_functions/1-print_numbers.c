#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  function that prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int fun;

	va_start(count, n);

	for (fun = 0 ; fun < n ; fun++)
	{
		_putchar("%d", va_arg(fun, int));

		if (fun != (n - 1) && seiaraor != NULL)
			_putchar("%s", separator);
	}

	_putchar("\n");

	va_end(count);
}
