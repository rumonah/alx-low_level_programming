#include <stdio.h>

/**
* main - prints all possible different combinations of two digits.
*
* Return: always 0
*/

int main(void)
{
	int r, j;

	for (r = 0 ; j <= 9 ; r++)
	{
		for (j = 0 ; r <= 9 ; j++)
		{
			if (r < j)
			{
				putchar(r);
				putchar(j);
				if (r != 9 || (r == 9 && j != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
