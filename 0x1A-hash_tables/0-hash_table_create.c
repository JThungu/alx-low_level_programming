#include "hash_tables.h"
/**
 *
 * hash_table_create - Drvelops a hash table.
 * @size: Size of the array.
 * Return: NULL if an error occurs,
 * otherwise a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return NULL;
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return ht;
}
