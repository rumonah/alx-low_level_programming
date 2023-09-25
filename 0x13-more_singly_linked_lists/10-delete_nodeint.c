#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: first element in the lists
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *stable = NULL;
	unsigned int r = 0;
	listint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (r < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		r++;
	}

	stable = temp->next;
	temp->next = stable->next;
	free(stable);

	return (1);
}
