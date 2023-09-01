#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int check_pali(char *s, int r, int leng);

/**
 * _is_palindrome - check if a string is palindrome
 * @s: the sring to reverse
 *
 * Return: 1 if it is and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pali(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the string length
 * @s: the string to be calculated length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pali - check characters of palindrome recursively
 * @s: the string to checked
 * @r: integer
 * @leng: the lenth of the string
 *
 * Return: 1 if palindrome, 0 if its not
 */

int check_pali(char *s, int r, int leng)
{
	if (*(s + r) != *(s + leng - 1))
		return (0);
	if (r >= leng)
		return (1);
	return (check_pali(s, r + 1, leng - 1));
}
