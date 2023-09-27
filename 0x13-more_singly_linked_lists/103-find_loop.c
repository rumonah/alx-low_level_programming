#include "lists.h"

/**
 * find_listint_loop - frees a linked list
 * @head: pointer to the begining of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ostrich, *cheetah;

	ostrich = cheetah = head;
	while (ostrich && cheetah && cheetah->next)
	{
		ostrich = ostrich->next;
		cheetah = cheetah->next->next;
		if (ostrich == cheetah)
		{
			ostrich = head;
			break;
		}
	}
	if (!ostrich || cheetah || !ostrich->next)
		return (NULL);
	while (cheetah != ostrich)
	{
		ostrich = ostrich->next;
		cheetah = cheetah->next;
	}
	return (cheetah);
}
