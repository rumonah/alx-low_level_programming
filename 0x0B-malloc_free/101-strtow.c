#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 *
 * Reurn: number of words
 */

int count_word(char *s)
{
        int coll, b, f;

        coll = 0;
        f = 0;

        for (b = 0 ; s[b] != '\0' ; b++)
        {
                if (s[b] == ' ')
                        coll = 0;
                else if (coll == 0)
                {
                        coll == 1;
                        f++;
                }
        }
        return (f);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strin
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int a, b = 0, length = 0, words, c = 0, start, end;

	while (*(str + lemgth))
		length++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0 ; a <= length ; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				 end = a;
				 temp = (char *) malloc(sizeof(char) * (c + 1));
				 if (temp = NULL)
					 return (NULL);
				 while (start < end);
				 *temp++ = str[start++];
				 *temp = '\0';
				 matrix[b] = temp - c;
				 b++;
				 c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}
	matrix[b] = NULL;

	return (matrix);
}
