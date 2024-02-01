#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * key_index - get the index of a key/value pair which
 * should be stored in array of a hash table
 * @key: the key to get the index of.
 * @size: size of the array of the hash table
 * Returns: the index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
