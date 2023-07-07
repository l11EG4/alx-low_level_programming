#include "hash_tables.h"

/**
* __key_index - gives index of the key
* @key: key
* @size: size of hashtable array
* Made by MEGATRON
* Return: index where key/value pair is stored in hashtable array
*/

ulint __key_index(const unsigned char *key, ulint size)
{
	ulint indx;

	if (size == 0)
		return (0);

	indx = hash_djb2(key);
	return (indx % size);
}
