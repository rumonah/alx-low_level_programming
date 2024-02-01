#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element in a hash table
 * @ht: pointer to hash table
 * @key: the key to add - cannot be an empty string
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *the_value_copied;
	hash_node_t *new;
	unsigned long int mode, r;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	the_value_copied = strdup(value);
	if (the_value_copied == NULL)
		return (0);

	mode = key_index((const unsigned char *)key, ht->size);
	for (r = mode; ht->array[r]; r++)
	{
		if (strcmp(ht->array[r]->key, key) == 0)
		{
			free(ht->array[r]->value);
			ht->array[r]->value = the_value_copied;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(the_value_copied);
		
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = the_value_copied;
	new->next = ht->array[mode];
	ht->array[mode] = new;

	return (1);
}
