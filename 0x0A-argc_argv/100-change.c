#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the minimum number of coin to make
 * a change for an amount
 * @argv: arrays of arguments
 * @argc: argument number
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coind = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coind += 1;
	}
	printf("%d\n", coind);
	return (0);
}
