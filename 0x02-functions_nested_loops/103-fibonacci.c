#include <stdio.h>

/**
 * main - prints and finds the sum of the even-valued fibonacci
 * sequence not excluding 4000000
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	float r;
	unsigned long  i = 0, j = 1, sum;

	while (1)
	{
		sum = i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			r += sum;
		i = j;
		j = sum;
	}
	printf("%.0f\n", sum);

	return (0);
}
