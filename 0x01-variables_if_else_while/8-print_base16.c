#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: always 0
*/

int main(void)
{
	int r;
	
	for (r = 48 ; r <= 58 ; r++)
		putchar(r);
	for (r = 97 ; r <= 103 ; r++)
		putchar(r);
	putchar('\n');
	return (0);
}
