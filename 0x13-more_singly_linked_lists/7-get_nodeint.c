#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list.
 * @head: parameter
 * @index: parameter
 * Made by Megatron
 * Return: result
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cmp = 0;

	if (!head)
		return (NULL);
	while (cmp < index)
	{
		if (!(head->next))
			return (NULL);
		head = head->next;
		cmp++;
	}
	return (head);
}
