#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: operation passed as argument
 *
 * Return: pointer to the function
 * corresponding to the  given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL,NULL},
	};
	int r = 0;

	while (ops[r].op != NULL && *(ops[r].op) != *s)
		r++;
	
	return (ops[r].f);
}			}
