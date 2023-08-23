#include "main.h"

/**
 * print_array - prints n  element of an array of integers
 * @n: number of elements of array to be printed
 * @a: array to be used
 * Return: void
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0 ; p < n ; p++)
	{
		printf("%d", a[p]);
		if (p < n - 1)
			printf(", ");
	}
	printf("\n");

}
