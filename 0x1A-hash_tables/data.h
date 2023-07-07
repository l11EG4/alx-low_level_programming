#ifndef __DATA_DEFS_H__
#define __DATA_DEFS_H__

/**
* struct hash_node_s - Node of a hash table
* Made by MEGATRON
* @key: The key str
* The key is unique in the HashTable
* @value: The value corresponding to the key
* @next: A pointer to the next node of the List
*/

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - Hash table data structure
* Made by MEGATRON
* @size: The size of the array
* @array: An array of size @size
* Each cell of this array is a pointer to the first node of a linked list
*/

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
* struct shash_node_s - Node of a sorted hash table
* Made by MEGATRON
* @key: The key, string
* The key is unique in the HashTable
* @value: The value corresponding to a key
* @next: A pointer to the next node of the List
* @sprev: A pointer to the previous element of the sorted linked list
* @snext: A pointer to the next element of the sorted linked list
*/

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
* struct shash_table_s - Sorted hash table data structure
* Made by MEGATRON
* @size: The size of array
* @array: An array of size @size
* Each cell of this array is a pointer to the first node of a linked list,
* because we want our HashTable to use a Chaining collision handling
* @shead: A pointer to the 1st element of the sorted linked list
* @stail: A pointer to the last element of the sorted linked list
*/

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

typedef unsigned long int ulint;

hash_table_t *hash_table_create(unsigned long int size);
ulint hash_djb2(const unsigned char *str);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
* hash_djb2 - implementation of the djb2 algo
* @str: string used to generate hash value
* Made by MEGATRON
* Return: hash of value
*/

__attribute__((weak))ulint hash_djb2(const unsigned char *str)
{
	ulint hash;
	int a;

	hash = 5381;
	for (; (a = *str++);)
		hash = ((hash << 5) + hash) + a;

	return (hash);
}

/**
* key_index - gives index of the key
* @key: key
* @size: size of hashtable array
* Made by MEGATRON
* Return: index where key/value pair is stored in hashtable array
*/

__attribute__((weak))ulint key_index(const unsigned char *key,
		ulint size)
{
	ulint indx;

	if (size == 0)
		return (0);

	indx = hash_djb2(key);
	return (indx % size);
}

#endif
