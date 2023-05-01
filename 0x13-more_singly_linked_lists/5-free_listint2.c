#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: parameter
 * Made by Megatron
 * Return: result
 */

void free_listint2(listint_t **head)
{
	listint_t *lst;

	if (!head)
		return;
	while (*head)
	{
		lst = *head;
		*head = (*head)->next;
		free(lst);
	}
	*head = NULL;
}
