#include "lists.h"

/**
* print_dlistint - print dbl linked list
* @h: list
* Made by MEGATRON
* Return: nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nod = 0;

	for (; h; nod++, h = h->next)
		printf("%d\n", h->n);

	return (nod);
}
