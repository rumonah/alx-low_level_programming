#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * check_numb - check - string there are digit
 * @str: array str
 *
 * Return: 0
 */

int check_numb(char *str)
{
	unsigned int number;

	number = 0;
	while (number < strlen(str))
	{
		if (!isdigit(str[number]))
		{
			return (0);
		}
		number++;
	}
	return (1);
}

/**
 * main - print name of the program
 * @argc: arguments number
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number;
	int str_to_int;
	int sum;

	number = 1;
	while (number < argc)
	{
		if (check_numb(argv[number]))
		{
			str_to_int = _atoi(argv[number]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		 number++;
	}
	printf("%d\n", sum);
	return (0);
}
