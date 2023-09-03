#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into the program
 * @argc - number of arguments
 * @argv - argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
