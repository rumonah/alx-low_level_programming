#include "main.h"

/**
 * cap_string -  capitalize all words of a string
 * @r: capitalized to string
 *
 * return: r as the capital string
 */

char *cap_string(char *r)
{
	int string_lengh;
	
/* scan through the string*/
	string_lengh = 0;
	while (r[string_lengh] != '\0')
	{/* if the next character after lenth is a char, capitalise it */
		if (r[0] >=97 && r[0] <= 122)
		{
			r[0] = r[0] - 32;
		}
		if (r[string_lengh] == ' ' || r[string_lengh] == '\t' || r[string_lengh] == '\n'
				|| r[string_lengh] == ',' || r[string_lengh] == ';' || r[string_lengh] == ','
				|| r[string_lengh] == ',' || r[string_lengh] =='!' || r[string_lengh] == '?'
				|| r[string_lengh] == '"' || r[string_lengh] == '(' || r[string_lengh] == ')'
				|| r[string_lengh] == '{' || r[string_lengh] == '}')
		{
			if (r[string_lengh +1] >= 97 && r[string_lengh +1] <= 122)
			{
				r[string_lengh +1] = r[string_lengh + 1] -32;
			}
		}
		string_lengh++;
	}
	return (r);
}
