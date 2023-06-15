#include "lists.h"

/**
* dlistint_len - print dbl linked list
* @h: list
* Made by MEGATRON
* Return: nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nod = 0;

	for (; h; nod++)
		h = h->next;

	return (nod);
}
