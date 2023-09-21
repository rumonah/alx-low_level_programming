#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len -  the number of elements in a linked list_t list
 * @h: linked list
 * Return: the number of element of a list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
