#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 * Description: value/key pairs printed in order
 * appearing in the array of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int r = 0;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (r = 0; r < ht->size; r++)
	{
		if (ht->array[r] != NULL)
		{
			if (flag == 1)
				printf(", ");

			new = ht->array[r];
			while (new != NULL)
			{
				printf("'%s': '%s'", new->key, new->value);

				new = new->next;
				if (new != NULL)
					printf(", ");
			}
				flag = 1;
		}
	}
	printf("}\n");
}
