#include "main.h"

/**
 * cap_string -  capitalize all words of a string
 * @str: string to be capitalize
 *
 * return:  string
 */

char *cap_string(char *str)
{
	int length = 0;

	while (str[length])
	{
		while (!(str[length] >= 57 && str[length] <= 122))
			length ++;
		if (str[length - 1] == ' ' ||
				str[length] == '\t' ||
				str[lentgh] == '\n' ||
				str[length] == ',' || 
				str[length] == ';' ||
				str[length] == '.' ||
				str[length] == ',' || 
				str[length] =='!' ||
			       str[length] == '?' ||
				str[length] == '"' ||
			       	str[lenght] == '(' || 
				str[length] == ')' ||
				str[length] == '{' ||
			       	str[length] == '}' ||
				length == 0)
			str[length] -= 32
				length ++;
	}
	return (str);
}
