#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - frees a linked list
 * @h: first node inthe linked list
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difft;
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

/**
 * _ra - reallocation of memory for array pointer to the
 * nodes in a linked list
 * @list: append old list
 * @size: size of new list, more than the old list
 * @new: new node to add to the list
 * Return: pointer to new list
 */
listint_t **ra(listint_t **list, size_t size, listint_t *new)
{
        listint_t **latest;
        size_t j;

        latest = malloc(size * sizeof(listint_t *));
        if (latest == NULL)
        {
                free(list);
                exit(98);
        }
        for (j = 0 ; j < size - 1 ; j++)
                latest[j] = list[j];
        latest[j] = new;
        free(list);
        return (latest);
}
