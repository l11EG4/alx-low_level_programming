#include "hash_tables.h"

/**
* hash_table_create - create a hashtable
* @size: size of hash table to create
* Made by MEGATRON
* Return: pointer to the newly created a table
*/

hash_table_t *hash_table_create(ulint size)
{
	table_t *ht;
	node_t **array;
	ulint a;

	ht = malloc(sizeof(table_t));
	if (!ht)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}

	for (a = 0; a < size; a++)
		array[a] = NULL;

	ht->size = size;
	ht->array = array;

	return (ht);
}
