#include <stdio.h>

/**
* main -lowercase alphabets in reverse
* 
* Return: always 0
*/

int main(void)
{
	char ru;
	
	for (ru = 'z' ; ru >= 'a' ; ru--)
		putchar(ru);
	putchar('\n');
	return (0);
}
