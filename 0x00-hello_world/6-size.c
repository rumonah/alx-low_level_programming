#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void)
{        char c;
         int i;
	 long int li;
         long long int lli;
	 float f;
printf("Size of a char: %zu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a int: %zu byte(s)\n",(unsigned long)sizeof(i));
printf("Size of a long int: %zu byte(s)\n",(unsigned long)sizeof(li));
printf("Size of a long long int: %zu bytes(s)\n",(unsigned long)sizeof(lli));	
printf("Size of a float:%zu bytes(S)\n",(unsigned long)sizeof(f));
return (0);
}
