#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistont_t list
 * @head: head of the list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
