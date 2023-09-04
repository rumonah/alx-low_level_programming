#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat -  function that concateantes two strings
 * @s1: 1 string
 * @s2: 2 string
 *
 * Return: newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int r;
	int s1size = 0;
	int s2size = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (r = 0 ; s1[r] != '\0' ; r++)
		s1size++;
	for (r = 0 ; s2[r] != '\0' ; r++)
		s2size++;

	output = malloc(sizeof(char) * (s1size + s2size) + 1);

	if (output == NULL)
		return (NULL);
	for (r = 0 ; s1[r] != '\0' ; r++)
		output[r] = s1[r];
	for (r = 0 ; s2[r] != '\0' ; r++)
		output[s1size] = s2[r];
	return (output);

}
