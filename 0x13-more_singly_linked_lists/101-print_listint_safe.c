#include "lists.h"

/**
* print_listint_safe - prints a list
* @head: pointer
* Made by Megatron
* Return: the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t cmp = 0;
	size_t n;
	const listint_t *tmps = NULL;
	const listint_t *node = NULL;

	tmps = head;

	while (tmps)
	{
		printf("[%p] %d\n", (void *)tmps, tmps->n);
		cmp++;
		tmps = tmps->next;
		node = head;
		n = 0;

		while (n < cmp)
		{
			if (tmps == node)
			{
				printf("-> [%p] %d\n", (void *)tmps, tmps->n);
				return (cmp);
			}
			node = node->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (cmp);
}
