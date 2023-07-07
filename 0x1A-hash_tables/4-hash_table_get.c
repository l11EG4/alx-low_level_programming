#include "hash_tables.h"

/**
* hash_table_get - given key/ get value
* @ht: hashtable
* @key: key
* Made by MEGATRON
* Return: value or 0 if not found
*/

char *hash_table_get(const table_t *ht, const char *key)
{
	ulint indx;
	node_t *tmp;

	/* find index in hash table where key is */
	/* look through linked list to find matching key for value */

	if (!ht || !key)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array)[indx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
