#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list.
 * @n: value of element
 * @head: head of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = node;
	}

	node->next = h;

	if (h != NULL)
		h = h->prev;
	*head = node;

	return (node);

}
