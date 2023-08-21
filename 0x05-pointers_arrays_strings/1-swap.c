#include "main.h"

/**
 * swap_int - print a function that swaps the values of 2 integers
 *@a: integer to swap
 *@b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *b;
	*b = *a;
	*a = r;	
}
