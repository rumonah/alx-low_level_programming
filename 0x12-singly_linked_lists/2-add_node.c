#include "lists.h"
#include <string.h>

/**
 * add_note - adds a new node at the beginning of a list_t list
 * @str: duplicate string to add on the node
 * @head: double pointer to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *duplicate;
	unsigned int len = 0;

	while (str[len])
		len++;

	duplicate = malloc(sizeof(list_t));
	if (!duplicate)
		return (NULL);

	duplicate->str = strdup(str);
	duplicate->len = len;
	duplicate->next = (*head);
	(*head) = duplicate;

	return (*head);
}
