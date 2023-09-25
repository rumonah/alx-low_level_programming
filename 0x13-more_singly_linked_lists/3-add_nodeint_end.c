#include "lists.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @n: to be inerted in the new element
 * @head: pointer to new element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *advanced;
	listint_t *temp = *head;

	advanced = malloc(sizeof(listint_t));
	if (!advanced)
		return (NULL);

	advanced->n = n;
	advanced->next = NULL;

	if (*head == NULL)
	{
		*head = advanced;
		return (advanced);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = advanced;

	return (advanced);
}
