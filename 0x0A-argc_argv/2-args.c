#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument number
 * @argv: argument vertor
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0 ; r < argc ; r++)
		printf("%s\n", argv[r]);
	return (0);
}
