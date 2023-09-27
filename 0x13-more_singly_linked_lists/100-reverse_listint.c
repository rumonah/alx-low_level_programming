#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list
 * @head - first node in a list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	rev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;

	return (*head);
}
