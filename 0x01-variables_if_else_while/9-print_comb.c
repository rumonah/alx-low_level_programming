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
		putchar(r + '0');
		if (r != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
