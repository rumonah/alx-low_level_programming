#include <stdio.h>

/**
 * main - print and calculate the sum of all multiples of
 * 3 or 5 below 1024
 * Return: 0
 */
int main(void)_
{
	unsigned long int sum, sum3, sum5;
	int r;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (r = 0, r < 1024; ++r)
	{
		if ((r % 3) == 0)
		{
			sum3 = sum3 + r;
		}
		else if ((r % 5) == 0)
		{
			sum5 = sum5 + r;
		}
		sum = sum3 + sum5;
		printf("%lu\n", sum);
		return (0);
	}
}
