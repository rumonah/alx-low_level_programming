#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		temp = head->next;
		free(temp);
		free(temp->str);
	}
}
