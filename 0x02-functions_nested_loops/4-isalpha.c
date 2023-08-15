#include "main.h"
/**
 * _isalpha  - Returns 1 if c is a letter, lowercase or uppercase
 *
 * Describe :use _putchar
 *
 * @c: collect the character
 *
 * Return:  1 if c is lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	{
		return (0);
}
