#include <stdio.h>

/**
* main - entry point
* Description: prints the alphabet in lowercase
*
* Return: always 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
