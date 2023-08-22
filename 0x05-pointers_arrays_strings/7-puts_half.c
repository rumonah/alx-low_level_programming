#include "main.h"

/**
 * puts_half - print half a string
 * @str: parameted to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int a, n, numb = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		numb++;
	n = (numb - 1) / 2;
	for (a = n + 1 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
