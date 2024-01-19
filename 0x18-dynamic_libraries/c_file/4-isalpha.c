#include "main.h"
/**
 * _isalpha  - check for alpherbetic characters
 *
 * @c: The character paremeter
 *
 * Return:  1 if c is lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
