#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a list
* @head: pointer
* @index: index of node
* Made by Megatron
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmps, *dat = *head;
	unsigned int cmp;

	if (dat == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(dat);
		return (1);
	}
	for (cmp = 0; cmp < (index - 1); cmp++)
	{
		if (dat->next == NULL)
			return (-1);
		dat = dat->next;
	}
	tmps = dat->next;
	dat->next = tmps->next;
	free(tmps);
	return (1);
}
