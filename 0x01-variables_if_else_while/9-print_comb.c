#includ <stdio.h>
 /**
  *
  * main - prints all possible combinations of single-digit numbers.
  *
  */

int main(void)
{ 
	int a;
	for (a = 48; n < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
