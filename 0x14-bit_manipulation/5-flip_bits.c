#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts number of bits to change to
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, numb = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (r = 63 ; r >= 0 ; r--)
	{
		current = exclusive >> r;
		if (current & 1)
			numb++;
	}

	return (numb);
}
