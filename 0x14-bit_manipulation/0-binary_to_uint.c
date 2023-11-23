#include <stdio.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int r;

	r = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		r <<= 1;
		if (b[a] == '1')
			r += 1;
	}
	return (r);
}
