#include "main.h"

/**
 * _strdup - copies string to newly allocated space in memory
 * @str: string to copy to new memory
 * Return: new memory
 */

char *_strdup(char *str)
{
	int r;
	char *copy;
	int number = 0;

	if (str == NULL)
		return (NULL);

	for (r = 0 ; str[r] != '\0' ; r++)
		number++;

	copy = malloc(sizeof(char) * number + 1);

	if (copy == NULL)
		return (NULL);
	for (r = 0 ; str[r] != '\0' ; r++)
		copy[r] = str[r];
	return (copy);
}
