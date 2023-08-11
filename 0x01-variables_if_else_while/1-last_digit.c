#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - function main
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	r = n % 20;|
	if (r > 10)
		printf("Last digit of %d is %d and is greater than 10", n, r);
	else if (r == 0)
		printf("Last digit of %d is %d and is zero", n, r);
	else if (r < 6 && r != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, r);
	printf("\n");
	return (0);
}
