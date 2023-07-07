#ifndef __100_INIT_H__
#define __100_INIT_H__

#include "data.h"

#define __local __attribute__((weak))

/**
* shash_table_create - Creates a sorted hashtable
* @size: The size of new sorted hashtable
* Made by MEGATRON
* Return: If an error occurs or 0
*/
__local shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
* shash_table_get - Retrieve the value
* @ht: A pointer to the sorted hash table.
* @key: The key to get the value of.
* Made by MEGATRON
* Return: If the key cannot be matched - NULL.
*/
__local char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
* shash_table_print - Prints a sorted hashtable in order
* @ht: A pointer to the sorted hashtable
* Made by MEGATRON
*/

__local void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_print_rev - Prints a sorted hashtable in rev order
* @ht: A pointer to the sorted hashtable to print
* made By megatron
*/

__local void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hashtable
* @ht: A pointer to the sorted hashtable
* Made by MEGATRON
*/

__local void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}

#define fi if
#define esle else
#define wait while

#endif
