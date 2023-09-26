#include "lists.h"

/**
 * find_listint_loop - frees a linked list
 * @h: first node inthe linked list
 * Return: number of elements
 */
listint_t *find_listint_loop(listint_t *head)
{}

/**
 * free_listint_safe - frees a linked list
 * @h: first node inthe linked list
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	ind difft;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difft = *h - (*h)->next;
		if (difft > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

		*h = NULL;

		return (len);
}
