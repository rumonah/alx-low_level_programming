#include <stdio.h>

/**
* main - prints the size of various types on the comp
*
* Return: 0 (Success)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char : %d byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int : %d byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long int : %d byte(s)\n",(unsigned long) sizeof(c));
	printf("Size of a long long int : %d byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of a float : %d byte(s)\n", (unsigned long) sizeof(e);
	return (0);
}
