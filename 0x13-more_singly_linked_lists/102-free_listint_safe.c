#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 * Made by Megatron
 *
 * Return: the size of the list free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t ln = 0;
	int cmp;
	listint_t *node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		cmp = *h - (*h)->next;
		if (cmp > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			ln++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ln++;
			break;
		}
	}
	*h = NULL;
	return (ln);
}
