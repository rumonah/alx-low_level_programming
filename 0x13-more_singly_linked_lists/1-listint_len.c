#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list
 * @h: linked list of type list_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t code = 0;

	while (h)
	{
		code++;
		h = h->next;
	}

	return (code);
}
