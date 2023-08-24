#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes lowercase to uppercase
 * @r: string that will be checked for lowercase
 *
 * Return: the resulting string where all letters are uppercase
 */

char *string_toupper(char *r)
{
	int leng_of_string;

	leng_of_string = 0;

	while (r[leng_of_string] != '\0')
	{
		if (r[leng_of_string] >= 97 && r[leng_of_string] <= 122)
		{
			r[leng_of_string] = r[leng_of_string] - 32;
		}
		leng_of_string++;
	}
	return (r);
}
