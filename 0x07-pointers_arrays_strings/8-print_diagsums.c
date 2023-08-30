#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: matrix integers
 * @size: size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int digit;
	int sum1 = 0;
	int sum2 = 0;

	for (digit = 0 ; digit < size ; digit++)
	{
		sum1 += a[digit];
		a += size;
	}

	a -= size;

	for (digit = 0 ; digit < size ; digit++)
	{
		sum2 += a[digit];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
