#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *mode, *head;
	hash_table_t *new = ht;
	unsigned long int r;

	for (r = 0; r < ht->size; r++)
	{
		if (ht->array[r] != NULL)
		{
			mode = ht->array[r];
			while (mode != NULL)
			{
				head = mode->next;
				free(mode->key);
				free(mode->value);
				free(mode);

				mode = head;
			}
		}
		free(new->array);
		free(new);
}
