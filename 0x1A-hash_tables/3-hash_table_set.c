#include "hash_tables.h"

/**
* create_and_add_node - malloc, set values, and insert node into hashtable
* @ht: hashtable
* @key: key; can t be empty str
* @value: value
* @idx: index to insert in at hash table
* Made by MEGATRON
* Return: one if success, zero if fail
*/

int create_and_add_node(table_t *ht, const char *key, const char *value,
			ulint idx)
{
	node_t *node = NULL;
	char *k;
	char *v;

	node = malloc(sizeof(node_t));
	if (!node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(node);
		return (0);
	}

	node->key = k;
	node->value = v;

	if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
}

/**
* hash_table_set - add element to hashtable
* @ht: hashtable
* @key: key; can t be empty string
* @value: value
* Made by MEGATRON
* Return: one if success zero if fail
*/

int hash_table_set(table_t *ht, const char *key, const char *value)
{
	ulint indx;
	node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || !strlen(key) || !value)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[indx];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (create_and_add_node(ht, key, value, indx));
}
