#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
 */
int main(void)
{
	int r = 48;
	int j;
	int l = 44;
	int p = 32;

	for (; r <= 57; r++)
	{
		j = r + 1;
		for (; j <= 57; j++)
		{
			putchar (r);
			putchar (j);
			if (r != 56 || (r == 56 && j != 57))
			{
				putchar (l);
				putchar (p);
			}
		}
	}
	putchar ('\n');
	return (0);
}
