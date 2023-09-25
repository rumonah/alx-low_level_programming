#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to first node in the lust
 * @n: data to be inserted in new node
 * Return : the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *advance;

	advance = malloc(sizeof(listint_t));
	if (!advance)
		return (NULL);

	advance->n = n;
	advance->next = *head;
	*head = advance;

	return (advance);
}
