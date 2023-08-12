#include <stdio.h>

/**
* main - print all possible combinations of single-digit numbers.
*
* Return: always 0
*/

int main(void)
{
	int r;

	for (r = 0 ; r < 10 ; r++)
	{
		if (r == 9)
			putchar(r + '0');
		else
		{
		putchar(r + '0');
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
