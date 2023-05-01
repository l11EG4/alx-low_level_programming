#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: parameter
 * Made by Megatron
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *lst;
	int cmp;

	if (!(*head))
		return (0);
	lst = *head;
	cmp = lst->n;
	(*head) = (*head)->next;
	free(lst);
	return (cmp);
}
