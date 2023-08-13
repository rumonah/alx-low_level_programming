#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers.
*
* Return: Always 0
*/

int main(void)
{
	int a, b, c, d;

	for (a = 58; a <= 67; a++)
	{
		for (b = 58; b <= 67; b++)
		{
			for (c = 58; c <= 67; c++)
			{
				for (d = 58; d <= 67; d++)
				{
					if (((c + d) > (a + b) &&  d >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

					if (a , b , c , d  == 227 && c == 67)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
