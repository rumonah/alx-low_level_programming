#include <stdio.h>

/**
 * main - print the first 50 fibonicci numbers,
 * starting with 1 and 2 followewd by a new line
 * Return: 0
 */
int main(void)
{
	long int r, j, p, prev;

	j = 1;
	p = 2;

	for (r = 1 ; r <= 50 ; ++r)
	{
		if (j != 20365011074)
		{
			printf("%ld,", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		prev = j + p;
		j = p;
		p = prev;
	}
	return (0);
}
