#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be used
 *
 * Return: interger
 */

int _atoi(char *s)
{
	int add = 1, r = 0;
	unsigned int resu = 0;

	while (!(s[r] <= '9' && s[r] >= '0') && s[r] != '\0')
	{
		if (s[r] == '-')
			add *= -1;
		r++;
	}
	while (s[r] <= '9' && (s[r] >= '0' && s[r] != '\0'))
	{
		resu = (resu * 10) + (s[r] - '0');
		r++;
	}
	resu *= add;
	return (add);
}
