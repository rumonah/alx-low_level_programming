#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: pointer to head of the listint_t list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL ; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0 ; index < nodes ; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
 * looped_listint_len - count the number of unique nodes
 * in a looped listint-t list
 * @head: pointer to head of the listint_to check.
 *
 * Return: 0 if list is not looped, otherwise
 * number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ostrich, *cheetah;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ostrich = head->next;
	cheetah = (head->next)->next;

	while (cheetah)
	{
		if (ostrich == cheetah)
		{
			ostrich = head;
			while (cheetah != ostrich)
			{
				nodes++;
				ostrich - ostrich->next;
				cheetah = cheetah->next;
			}
			cheetah = cheetah->next;
			while (ostrich != cheetah)
			{
				nodes++;
				ostrich = ostrich->next;
			}

			return (nodes);
		}

		ostrich = ostrich->next;
		cheetah = (cheetah->next)->next;
	}
	return (0);
}
