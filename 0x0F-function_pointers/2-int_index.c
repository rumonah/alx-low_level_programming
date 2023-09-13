#include <stdio.h>
#include "function_pointers.h"

/**
 * int-index - executes a function given as a parameter on each element of an array
 * @array: the array
 * @cmp: pointer to function of 1 of the 3 in main
 * @size: size of element
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
        int r;

        if (array == NULL || size <= 0 || cmp == NULL)
                return (-1);

        for (r = 0 ; < size ; r++)
        {
                if (cmp(array[r]))
                        return (r);
        }

        return (-1);
}
