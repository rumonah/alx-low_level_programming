#include "main.h"
# include <stdio.h>

/**
 * rot13 - function that encodes a string using tro13
 * @s: string parameter from pointer
 * return: *s
 */

char *rot13(char *s)
{
        int a;
        int r;
        char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXTYZabcdefghijklimopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (r = 0 ; a < 52 ; r++)
		{
			if (s[a] == input[r])
			{
				s[a] = output[r];
				break;
			}
		}
	}
	return (s);
}

