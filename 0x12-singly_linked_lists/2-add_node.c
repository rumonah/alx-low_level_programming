#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_note - adds a new node at the beginning of a list_t list
 * @str: new string to add on the node
 * @head: double pointer to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *dupl;
	int len = 0;

	dupl = malloc(sizeof(list_t));
	if (dupl == NULL)
		return (NULL);

	while (str[len])
		len++;

	dupl->str = strdup(str);
	dupl->len = len;
	dupl->next = (*head);
	(*head) = dupl;

	return (*head);
}
