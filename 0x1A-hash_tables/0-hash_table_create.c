#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - create a hash tables
 * @size: size of the array
 * Return: if the error occurs - NULL, otherwise
 * a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int r;

	ht = malloc(sizeof(hash_table_t));
	if (ht  == NULL)
		return (NULL);

	ht->size =  size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
		ht->array[r] = NULL;

	return (ht);
}
