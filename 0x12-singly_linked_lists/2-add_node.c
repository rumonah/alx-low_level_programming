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
	unsigned int r, strength = 0;

	dupl = malloc(sizeof(list_t));
	if (dupl == NULL)
		return (NULL);
	dupl->str = strdup(str);
	for (r = 0 ; str[r] != '\0' ; r++)
		strength++;
	dupl->len = strength;
	dupl->next = *head;
	*head = dupl;

	return (*head);
}
