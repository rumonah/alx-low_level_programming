#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int k, j;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char car[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	car[0] = l[(len ^ 59) & 63];
	for (k = 0, add = 0; k < len; k++)
		add += argv[1][k];
	car[1] = l[(add ^ 79) & 63];
	for (k = 0, j = 1; k < len; k++)
		j *= argv[1][k];
	car[2] = l[(j ^ 85) & 63];
	for (j = argv[1][0], k = 0; k < len; k++)
		if ((char)j <= argv[1][k])
			j = argv[1][k];
	srand(j ^ 14);
	car[3] = l[rand() & 63];
	for (j = 0, k = 0; k < len; k++)
		j += argv[1][k] * argv[1][k];
	car[4] = l[(j ^ 239) & 63];
	for (j = 0, k = 0; (char)k < argv[1][0]; k++)
		j = rand();
	car[5] = l[(j ^ 229) & 63];
	printf("%s\n", car);
	return (0);
}
