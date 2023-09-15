#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, r;
	char *arrg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arrg = (char *)main;

	for (r = 0 ; r < bytes ; r++)
	{
		if (r == bytes - 1)
		{
			printf("%02hhx\n", arrg[r]);
			break;
		}
		printf("%02hhx", arrg[r]);
	}
	return (0);
}
