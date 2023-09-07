#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks if string contains a non-digit character
 * @r: evacuated string
 *
 * Return: if no ditit is found 0. otherwise 1
 */

int is_digit(char *r)
{
	int a = 0;

	while (r[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - return length oa a string
 * @s: evaluated string
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles main errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, s2;
	int leng1, leng2. leng, a, carry, digit1, digit2, *result, r = 0;

	s1 = argv[1], s2 = argv[2];
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (a = 0 ; a <= leng1 + leng2 ; a++)
		result[a] = 0;
	for (leng1 = leng1 - 1 ; leng >= 0 ; leng1--)
	{
		digit1 = s1[leng1] - '0';
		carry = 0;
		for (leng2 = _strlen(s2) - 1 ; leng2 >= 0 ; leng--)
		{
			digit2 = s2[leng2] - '0';
			carry + = result[leng1 + leng2 + 1] + (digit1 * digit2);
			result[leng1 + leng2 + 1] = carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2 + 1] + = carry;
	}
	for (a = 0 ; a < leng - 1 ; a++)
	{
		if (result[a])
			r = 1;
		if (r)
			_putchar(result[a] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
