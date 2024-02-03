#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * sorted_list - insert a new node in sorted
 * @ht: a pointer to sorted hash table
 * @new_node: node to insert
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *srumzy = ht->shead;

	if (srumzy == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(new_node->key, srumzy->key) < 0)
		{
			new_node->snext = srumzy;
			new_node->sprev = srumzy->sprev;

			if (!srumzy->sprev)
				ht->shead = new_node;
			else
				srumzy->sprev->snext = new_node;
			srumzy->sprev = new_node;
			return;
		}
		srumzy = srumzy->snext;
	} while (srumzy);
	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_create - create a sorted hash tables
 * @size: size of the hash table
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *code;

	if (size == 0)
		return (NULL);
	code = calloc(1, sizeof(shash_table_t));
	if (code == NULL)
		return (NULL);

	code->size = size;
	code->array = calloc(size, sizeof(shash_node_t *));
	if (code->array == NULL)
	{
		free(code);
		return (NULL);
	}
	return (code);
}

/**
 * shash_table_set - functions that adds an element to
 * the sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to add the element
 * @value: value to add to the element
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int mode = 0;
	char *keycode, *valuecode;
	shash_node_t *mall, *wally;

	if (!ht || !key !*key || !value)
		return (0);
	valuecode = strdup(value);
	if (!valuecode)
		return (0);
	mode = key_index((const unsigned char *)key, ht->size);
	mall = ht->array[mode];

	while (mall)
	{
		if (!strcmp(key, mall->key))
		{
			free(mall->value);
			mall->value = valuecode;
			return (1);
		}
		mall = mall->next;
	}
	wally = calloc(1, sizeof(shash_node_t));
	if (wally == NULL)
	{
		free(valuecode);
		return (0);
	}
	keycode = strdup(key);
	if (!keycode)
		return (0);
	wally->key = keycode;
	wally->value = valuecode;
	wally->next = ht->array[mode];
	ht->array[mode] = wally;
	sorted_list(ht, wally);
	return (1);
}

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: key to get the value
 *
 * Return: the value or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int mode = 0;

	if (!ht || !key || !*key)
		return (NULL);
	mode = key_index((const unsigned char *)key, ht->size);
	mode = ht->array[mode];
	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *code;
	unsigned long int r = 0;

	if (!ht)
		return;
	code = ht->shead;
	printf("{");
	while (code)
	{
		if (r)
			printf(",");
		printf("'%s': '%s'", new->key, new->value);
		r = 1;
		code = code->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function to print the key:value from ht
 * in reverse
 * @ht: pointer to hash
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *code;
	unsigned long int r = 0;

	if (!ht)
		return;
	code = ht->stail;
	printf("{");
	while (code)
	{
		if (r)
			printf(",");
		printf("'%s': '%s'", new->key, new->value);
		r = 1;
		code = code->sprev;
	}
	printf("}\n")
}

/**
 * shash_table_delete - free a hash table and all nodes
 * @ht: pointer to a hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *mode, *code;
	unsigned long int r;

	if (!ht)
		return;

	for (r = 0; r < ht->size; r++)
	{
		mode = ht->array[r];
		while (mode)
		{
			code = mode;
			mode = mode->next;
			if (code->key)
				free(code->key);
			if (code->value)
				free(code->value);
			free(code);
		}
	}
	free(ht->array);
	free(ht);
}
