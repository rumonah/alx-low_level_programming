#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - rellocates a memory block using malloc aand free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *old_ptr;
	unsigned int r;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (r = 0 ; r < new_size ; r++)
			ptr2[r] = old_ptr[r];
	}

	free(ptr);
	return (ptr2);
}
