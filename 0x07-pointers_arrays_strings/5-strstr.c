#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate the substing
 * @needle: substring to be located
 * @haystack: string to be searched
 *
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int digit;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		digit = 0;
		if (haystack[digit] == needle[digit])
		{
			do {
				if (needle[digit + 1] == '\0')
					return (haystack);
				digit++;

			} while (haystack[digit] == needle[digit]);
		}
		haystack++;
	}

	return ('\0');
}
