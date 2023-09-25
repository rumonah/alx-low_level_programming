#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index -  inserts a new node
 * at a given position
 * @head: first node pOinter in the list
 * @idx: index to add the new node
 * @n: data inserted in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int go;
	listint_t *count;
	listint_t *temp = *head;

	count = malloc(sizeof(listint_t));
	if (!count || !head)
		return (NULL);

	count->n = n;
	count->next = NULL;

	if (idx == 0)
	{
		count->next = *head;
		*head = count;
		return (count);
	}

	for (go = 0 ; temp && go < idx; go++)
	{
		if (go == idx - 1)
		{
			count->next = temp->next;
			temp->next = count;
			return (count);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
