#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;
	k = 0;

	while (head != NULL)
	{
		if (k == index)
			break;
		head = head->next;
		k++;
	}

	return (head);
}

