#include <stdio.h>
#include "function_pointers.h"

/**
 * int-index -  function that searches for an integer
 * @cmp: pointer to the function to be used to compare values
 * @size: number of elements in the array 
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

        if (array == NULL || size <= 0 || cmp == NULL)
                return (-1);
	for (r = 0 ; r < size ; r++)
	{
                if (cmp(array[r]))
                        return (r);
        }
	return (-1);
}
