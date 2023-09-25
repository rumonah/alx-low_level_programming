#include  "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @index: the index of the node, starting at 0
 * @head: first node in liked list
 * Return: pointer to node if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int go = 0;
	listint_t *temp = head;

	while (temp && go < index)
	{
		temp = temp->next;
		go++;
	}

	return (temp ? temp : NULL);
}
