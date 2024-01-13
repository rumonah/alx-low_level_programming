#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list
 * @head: head of list
 * @index: index of new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	dlistint_t *new;
	unsigned int r = 0;

	node = *head;

	if (node != NULL)
		while (node->prev != NULL)
			node = node->prev;
	while (node != NULL)
	{
		if (r == index)
		{
			if (r == 0)
			{
				*head = node->next;

				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				new->next = node->next;

				if (new->next != NULL)
					node->next->prev = new;
			}

			free(node);
			return (1);
		}

		new = node;
		node = node->next;
		r++;
	}

	return (-1);
}
