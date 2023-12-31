#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int numb;
	int val;

	for (numb = 0 ; numb < n-- ; numb++)
	{
		val = a[numb];
		a[numb] = a[n];
		a[n] = val;
	}
}
