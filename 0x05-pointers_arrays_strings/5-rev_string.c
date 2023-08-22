#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int r;
	int numb = 0;

	for (r = 0 ; s[r] != '\0' ; r++)
		numb++;
	for (r = 0 ; r  < numb / 2 ; r++)
	{
		char m;

		m = s[r];
		s[r] = s[numb - 1 - r];
		s[numb - 1 - r] = m;
	}

}
