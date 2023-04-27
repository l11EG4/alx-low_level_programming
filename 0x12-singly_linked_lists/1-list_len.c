#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements of list
 * @h: pointer to the list_t list
 * made by Megatron
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

