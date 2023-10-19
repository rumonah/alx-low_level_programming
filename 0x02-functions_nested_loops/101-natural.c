#include <stdio.h>

/**
 * main - print and calculate the sum of all multiples of
 * 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i, sum;
	int result = 1024;

	for (i = 0; i < result; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);
}
