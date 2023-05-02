#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the position.
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Made by Megatron
 * Return: result
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temps;
	unsigned int cmp = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temps = *head;
	while (cmp < idx - 1)
	{
		if (!temps)
		{
			free(new);
			return (NULL);
		}
		temps = temps->next;
		cmp++;
	}
	new->next = temps->next;
	temps->next = new;
	return (new);
}
