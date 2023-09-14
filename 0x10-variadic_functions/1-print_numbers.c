#include "variadic_functions.h"
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
		printf("%d", va_arg(count, int));

		if (fun != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(count);
}
