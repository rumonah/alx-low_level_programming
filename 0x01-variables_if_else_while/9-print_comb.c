#include <stdio.h>

/**
*
* main - prints all possible combinations of single-digit numbers.
*
*/

int main(void)
{ 
	int r;

	for (r = 0 ; r < 10 ; r++)
	{
		if (r ==9)
			putchar(r +'0')
		else
		{
		putchar(r + '0');
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
