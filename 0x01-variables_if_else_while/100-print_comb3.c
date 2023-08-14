#include <stdio.h>

/**
* main - prints all possible different combinations of two digits.
*
* Return: always 0
*/

int main(void)
{
	int r, j;

	r = '0';
	j = '0';

	while (r <= '9')
	{
		while (j <= '9')
		{
			if (r < j)
			{
				putchar(r);
				putchar(j);
				if (r != '8' || (r == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		r++;
		j = '0';
	}

	putchar('\n');

	return (0);
}
