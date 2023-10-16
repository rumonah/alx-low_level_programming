#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints the sum of all multiples of
 * 3 or 5 below 1024(excuded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a = 0;
	unsigned long int r = 0, j = 1, next = 0;

	while (r < 98)
	{
		next = r + j;
		r = j;
		j = next;
		printf("%lu", next);

		if (r < 97)
			printf(",");
		r++;
	}
	putchar('\n');
	return (0);
}
