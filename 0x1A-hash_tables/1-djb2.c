#include "hash_tables.h"

/**
* __hash_djb2 - implementation of the djb2 algo
* @str: str used to gen a hashvalue
* Made by MEGATRON
* Return: hashvalue
*/

ulint __hash_djb2(const unsigned char *str)
{
	ulint hash;
	int a;

	hash = 5381;
	for (; (a = *str++);)
		hash = ((hash << 5) + hash) + a;

	return (hash);
}
