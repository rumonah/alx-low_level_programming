#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments passed
 * @argc - number of arguments
 * @argv - argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[]);
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);	
	return (0);
}
