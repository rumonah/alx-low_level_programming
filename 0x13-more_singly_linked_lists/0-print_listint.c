#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: linked list of the type listint_t to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t code = 0;

	while (h)
	{
		printf("%d\n", h->n);
		code++;
		h = h->next;
	}

	return (code);
}
