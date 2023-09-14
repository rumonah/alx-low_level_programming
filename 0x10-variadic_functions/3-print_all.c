#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int r = 0;
	char *str, *sepa = "";

	va_list list;

	va_start(list, format);

	if (formart)
	{
		while (format[r])
		{
			switch(formart[r])
			{
				case 'c';
				printf("%s%c", sepa, va_arg(list, int));
				break;
				case 'i';
				printf("%s%d", sepa, va_arg(list,int));
				break;
				case 'f';
				printf("%s%f", sepa, va_arg(list,double));
				break;
				case 's';
				str = va_arg(list, char*);
				if(!str)
					str = "(nil)";
				printf("%s%s", sepa, str);
				break;
				default:
				r++;
				continue;
			}
			sepa = ",";
			r++;
		}
	}

	printf("\n");
	va_end(list);
}
