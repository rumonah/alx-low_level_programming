#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked
 * @h: head of the list
 *
 * Return: number
 */

size_t dlistint_len(const dlistint_t *h)
{
	int new = 0;

	if (h == NULL)
		return (new);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		new++;
		h = h->next;
	}

	return (new);
}
