#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integers
 * @s: strint to be converted
 * Return: integer to be converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, leng, d, digit;

	a = 0;
	b = 0;
	c = 0;
	leng = 0;
	d = 0;
	digit = 0;

	while (s[leng] != '\0')
		leng++;
	while (a < leng && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: - arguments number
 * @agrv: - array of arguments
 *
 * Return: 0 for success, 1 for Error
 */

int main(int argc, char *argv[])
{
	int numb1, numb2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	result = numb1 * numb2;
	printf("%d\n", result);

	return (0);
}
