#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the number 1 to 100
 * Fizz for multiple of 3, Buzz for multiple of 5 and fizzbuz for muliple of both
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (a % 3 == 0)
			printf("%s", "Fizz");
		else if (a % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", a);
	}
	printf("\n");
	return (0);
}
