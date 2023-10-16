#include <stdio.h>

/**
 * main - prints and findsthe sum of the even valued terms
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	int r;
	unsigned long int i, j, k, next, sum;

	for (r = 1 ; r <= 33 ; ++r)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			sum = sum + i;
		}

		next = i + j;
		i = j;
		j = next;
	}

	printf("%lu\n", sum);

	return (0);
}
