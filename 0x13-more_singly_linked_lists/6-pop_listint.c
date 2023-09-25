#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to first element in the linked list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int codes;

	if (!head || !*head)
		return (0);

	codes = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (codes);
}
