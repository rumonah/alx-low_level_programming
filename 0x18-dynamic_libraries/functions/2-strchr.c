#include "main.h"

/**
 * _strchr - locate a character to a string
 * @c: located character
 * @s: string to be serached
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int digit;

	for (digit = 0 ; s[digit] >= '\0' ; digit++)
	{
		if (s[digit] == c)
			return (s + digit);
	}
	return ('\0');
}
