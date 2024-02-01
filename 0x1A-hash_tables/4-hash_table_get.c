#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to get the value of
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int mode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	mode = key_index((const unsigned char *)key, ht->size);
	if (mode >= ht->size)
		return (NULL);
	node = ht->array[mode];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
