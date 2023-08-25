#include "main.h"

/**
 * _leet - function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @r: value to be inputed
 * Retun: the value of r
 */
 char *leet(char *r)
{
	int a, b;
	char s1[] = "aAeEoOtTlL;
	char s2[] = "4433007711";

	for (a = 0 ; r[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (r[a] == s1[b])
			{
				r[a] = s2[b];
			}
		}
	}
	return (r);
}
